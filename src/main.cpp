#include <iostream>
#include <limits>

#include "../include/WorkTask.h"
#include "../include/PersonalTask.h"
#include "../include/FileManager.h"
#include "../include/TaskManager.h"


void line() {

    std::cout
        << "=========================================\n";
}



void title() {

    line();

    std::cout
        << "          SMART TASK MANAGER\n";

    line();
}



void menu() {

    title();

    std::cout
        << "1. Add Task\n";

    std::cout
        << "2. Show Tasks\n";

    std::cout
        << "3. Delete Task\n";

    std::cout
        << "4. Sort Tasks by Urgency\n";

    std::cout
        << "5. Filter by Category\n";

    std::cout
        << "6. Save Tasks\n";

    std::cout
        << "7. Load Tasks\n";

    std::cout
        << "0. Exit\n";


    line();

    std::cout
        << "Choice: ";
}



int main() {

    TaskManager manager;

    int choice = -1;


    while (choice != 0) {

        menu();

        std::cin >> choice;


        if (std::cin.fail()) {

            std::cin.clear();

            std::cin.ignore(
                std::numeric_limits<
                    std::streamsize
                >::max(),

                '\n'
            );


            std::cout
                << "\nInvalid input.\n";

            continue;
        }


        // ================= ADD =================

        if (choice == 1) {

            std::string title;
            std::string category;
            std::string status;

            int priority;
            int type;


            line();

            std::cout
                << "ADD NEW TASK\n";

            line();


            std::cout
                << "Title: ";

            std::cin >> title;


            std::cout
                << "Category: ";

            std::cin >> category;


            std::cout
                << "Priority:\n";
            std::cout
                << "1 = LOW\n";

            std::cout
                << "2 = MEDIUM\n";

            std::cout
                << "3 = HIGH\n";


            std::cin
                >> priority;


            std::cout
                << "Status: ";

            std::cin
                >> status;


            std::cout
                << "Type:\n";

            std::cout
                << "1 = Work\n";

            std::cout
                << "2 = Personal\n";


            std::cin
                >> type;



            if (type == 1) {

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


            std::cout
                << "\nTask added.\n";
        }



        // ================= SHOW =================

        else if (choice == 2) {

            manager.displayTasks();
        }



        // ================= DELETE =================

        else if (choice == 3) {

            int index;

            std::cout
                << "Task ID: ";

            std::cin
                >> index;


            manager.removeTask(index);
        }



        // ================= SORT =================

        else if (choice == 4) {

            manager.sortTasks();


            std::cout
                << "\nTasks sorted by urgency:\n";


            manager.displayTasks();
        }



        // ================= FILTER =================

        else if (choice == 5) {

            std::string category;


            std::cout
                << "Category: ";

            std::cin
                >> category;


            manager.filterByCategory(
                category
            );
        }



        // ================= SAVE =================

        else if (choice == 6) {

            FileManager::save(
                "tasks.txt",
                manager
            );
        }



        // ================= LOAD =================

        else if (choice == 7) {

            FileManager::load(
                "tasks.txt",
                manager
            );


            manager.displayTasks();
        }



        // ================= EXIT =================

        else if (choice == 0) {

            line();

            std::cout
                << "Exiting...\n";

            line();
        }



        else {

            std::cout
                << "\nInvalid choice.\n";
        }


        std::cout
            << "\n";
    }


    return 0;
}