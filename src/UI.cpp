#include "UI.h"

void UI::line() {
    std::cout << "------------------------------\n";
}

void UI::header(const std::string& title) {
    line();
    std::cout << "        " << title << "\n";
    line();
}

void UI::menu() {
    header("SMART TASK MANAGER");

    std::cout << "1. Add Work Task\n";
    std::cout << "2. Add Personal Task\n";
    std::cout << "3. Show All Tasks\n";
    std::cout << "4. Remove Task\n";
    std::cout << "5. Sort by Urgency\n";
    std::cout << "6. Search\n";
    std::cout << "7. Stats\n";
    std::cout << "8. Save\n";
    std::cout << "9. Load\n";
    std::cout << "0. Exit\n";

    line();
    std::cout << "Choice: ";
}