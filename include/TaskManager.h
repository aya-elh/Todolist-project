#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include <string>

#include "Task.h"

class TaskManager {

private:

    std::vector<Task*> tasks;

public:

    // Constructor
    TaskManager();

    // Methods
    void addTask(Task* task);

    void removeTask(int index);

    void displayTasks() const;

    void sortTasks();

    void filterByCategory(
        const std::string& category
    ) const;

    // Getter
    std::vector<Task*>& getTasks();

    // Destructor
    ~TaskManager();
};

#endif