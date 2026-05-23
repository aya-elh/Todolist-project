#include "../include/FileManager.h"
#include "../include/WorkTask.h"
#include "../include/PersonalTask.h"

#include <fstream>
#include <sstream>
#include <iostream>


void FileManager::save(
    const std::string& filename,
    TaskManager& manager
) {

    std::ofstream file(filename);

    if (!file) {

        std::cout
            << "\nError opening file.\n";

        return;
    }


    for (Task* task : manager.getTasks()) {

        file

            << task->getType()
            << ";"

            << task->getTitle()
            << ";"

            << task->getCategory()
            << ";"

            << task->getPriority()
            << ";"

            << task->getStatus()

            << "\n";
    }


    file.close();

    std::cout
        << "\nTasks saved successfully.\n";
}



void FileManager::load(
    const std::string& filename,
    TaskManager& manager
) {

    std::ifstream file(filename);

    if (!file) {

        std::cout
            << "\nNo saved file found.\n";

        return;
    }


    std::string line;


    while (getline(file, line)) {

        std::stringstream ss(line);

        std::string type;
        std::string title;
        std::string category;
        std::string status;

        int priority;


        getline(ss, type, ';');

        getline(ss, title, ';');

        getline(ss, category, ';');


        ss >> priority;

        ss.ignore();


        getline(ss, status);


        if (type == "Work") {

            manager.addTask(

                new WorkTask(
                    title,
                    category,
                    priority,
                    status
                )
            );
        }

        else {

            manager.addTask(

                new PersonalTask(
                    title,
                    category,
                    priority,
                    status
                )
            );
        }
    }


    file.close();

    std::cout
        << "\nTasks loaded successfully.\n";
}
