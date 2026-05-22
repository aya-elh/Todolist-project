#include <iostream>
#include <limits>

#include "../include/WorkTask.h"
#include "../include/PersonalTask.h"
#include "../include/FileManager.h"
#include "../include/TaskManager.h"

void line() {
    std::cout << "====================================\n";
}

void menu() {

    line();
    std::cout << "        SMART TASK MANAGER\n";
    line();

    std::cout << "1. Add Task\n";
    std::cout << "2. Show Tasks\n";
    std::cout << "3. Delete Task\n";
    std::cout << "4. Sort Tasks\n";
    std::cout << "5. Filter by Category\n";
    std::cout << "6. Save Tasks\n";
    std::cout << "7. Load Tasks\n";
    std::cout << "0. Exit\n";

    line();
    std::cout << "Choice: ";
}

int main() {

    TaskManager manager;

    int choice = -1;

    while (choice != 0) {

        menu();

        std::cin >> choice;

        // HANDLE BAD INPUT
        if (std::cin.fail()) {

            std::cin.clear();

            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            std::cout << "\nInvalid input.\n";
            continue;
        }

        // ================= ADD TASK =================
        if (choice == 1) {

            std::string title;
            std::string category;
            std::string status;

            int priority;
            int type;

            line();
            std::cout << "ADD NEW TASK\n";
            line();

            std::cout << "Title: ";
            std::cin >> title;

            std::cout << "Category: ";
            std::cin >> category;

            std::cout << "Priority (1-3): ";
            std::cin >> priority;

            std::cout << "Status: ";
            std::cin >> status;

            std::cout << "Type (1 = Work, 2 = Personal): ";
            std::cin >> type;

            try {

                if (type == 1) {

                    manager.addTask(
                        new WorkTask(
                            title,
                            category,
                            priority,
                            status
                        )
                    );

                } else {

                    manager.addTask(
                        new PersonalTask(
                            title,
                            category,
                            priority,
                            status
                        )
                    );
                }

                std::cout << "\nTask added successfully.\n";

            } catch (...) {

                std::cout << "\nError while adding task.\n";
            }
        }

        // ================= SHOW TASKS =================
        else if (choice == 2) {

            line();
            std::cout << "ALL TASKS\n";
            line();

            try {

                manager.displayTasks();

            } catch (...) {

                std::cout << "Error displaying tasks.\n";
            }
        }

        // ================= DELETE =================
        else if (choice == 3) {

            int index;

            std::cout << "Index to delete: ";
            std::cin >> index;

            try {

                manager.removeTask(index);

                std::cout << "\nTask deleted.\n";

            } catch (...) {

                std::cout << "\nInvalid index.\n";
            }
        }

        // ================= SORT =================
        else if (choice == 4) {

            try {

                manager.sortTasks();

                std::cout << "\nTasks sorted.\n";

            } catch (...) {

                std::cout << "\nSort failed.\n";
            }
        }

        // ================= FILTER =================
        else if (choice == 5) {

            std::string cat;

            std::cout << "Category: ";
            std::cin >> cat;

            line();
            std::cout << "FILTERED TASKS\n";
            line();

            try {

                manager.filterByCategory(cat);

            } catch (...) {

                std::cout << "\nFilter failed.\n";
            }
        }

        // ================= SAVE =================
        else if (choice == 6) {

            try {

                FileManager::save(
                    "tasks.txt",
                    manager
                );

                std::cout << "\nTasks saved.\n";

            } catch (...) {

                std::cout << "\nSave failed.\n";
            }
        }

        // ================= LOAD =================
        else if (choice == 7) {

            try {

                FileManager::load(
                    "tasks.txt",
                    manager
                );

                std::cout << "\nTasks loaded.\n";

            } catch (...) {

                std::cout << "\nLoad failed.\n";
            }
        }

        // ================= EXIT =================
        else if (choice == 0) {

            line();
            std::cout << "Exiting program...\n";
            line();
        }

        // ================= INVALID =================
        else {

            std::cout << "\nInvalid choice.\n";
        }

        std::cout << std::endl;
    }

    return 0;
}