#include "../include/TaskManager.h"

#include <iostream>
#include <algorithm>

// ================= CONSTRUCTOR =================

TaskManager::TaskManager() {}

// ================= ADD TASK =================

void TaskManager::addTask(Task* task) {

    tasks.push_back(task);
}

// ================= REMOVE TASK =================

void TaskManager::removeTask(int index) {

    if (index >= 0 && index < tasks.size()) {

        delete tasks[index];

        tasks.erase(
            tasks.begin() + index
        );

        std::cout
            << "\nTask removed successfully.\n";

    } else {

        std::cout
            << "\nInvalid index.\n";
    }
}

// ================= DISPLAY TASKS =================

void TaskManager::displayTasks() const {

    if (tasks.empty()) {

        std::cout
            << "\nNo tasks available.\n";

        return;
    }

    for (size_t i = 0; i < tasks.size(); i++) {

        std::cout
            << "\nTASK #"
            << i
            << "\n";

        tasks[i]->display();
    }
}

// ================= SORT TASKS =================

void TaskManager::sortTasks() {

    std::sort(

        tasks.begin(),
        tasks.end(),

        [](Task* a, Task* b) {

            return a->getUrgency()
                 > b->getUrgency();
        }
    );

    std::cout
        << "\nTasks sorted by urgency.\n";
}

// ================= FILTER TASKS =================

void TaskManager::filterByCategory(
    const std::string& category
) const {

    bool found = false;

    for (Task* task : tasks) {

        if (task->getCategory() == category) {

            task->display();

            found = true;
        }
    }

    if (!found) {

        std::cout
            << "\nNo tasks found in category: "
            << category
            << "\n";
    }
}

// ================= GET TASKS =================

std::vector<Task*>& TaskManager::getTasks() {

    return tasks;
}

// ================= DESTRUCTOR =================

TaskManager::~TaskManager() {

    for (Task* task : tasks) {

        delete task;
    }

    tasks.clear();
}