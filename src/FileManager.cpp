#include "FileManager.h"
#include "WorkTask.h"
#include "PersonalTask.h"
#include <fstream>
#include <sstream>

void FileManager::save(const std::string& filename, TaskManager& manager) {
    std::ofstream file(filename);

    for (auto task : manager.getTasks()) {
        file << task->getType() << ";"
             << task->getTitle() << ";"
             << task->getCategory() << ";"
             << task->getPriority() << ";"
             << task->getStatus() << "\n";
    }
}

void FileManager::load(const std::string& filename, TaskManager& manager) {
    std::ifstream file(filename);
    std::string line;

    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string type, title, category, status;
        int priority;

        getline(ss, type, ';');
        getline(ss, title, ';');
        getline(ss, category, ';');
        ss >> priority;
        ss.ignore();
        getline(ss, status);

        if (type == "Work")
            manager.addTask(new WorkTask(title, category, priority, status));
        else
            manager.addTask(new PersonalTask(title, category, priority, status));
    }
}