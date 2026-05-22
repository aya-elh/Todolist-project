#ifndef UI_H
#define UI_H

#include <iostream>

class UI {
public:
    static void header(const std::string& title);
    static void line();
    static void menu();
};

#endif