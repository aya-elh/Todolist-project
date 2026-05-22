#include "../include/Task.h"

// Constructor
Task::Task(
    std::string t,
    std::string c,
    int p,
    std::string s
) {
    title = t;
    category = c;
    priority = p;
    status = s;
}

// Destructor
Task::~Task() {}

// Getters
std::string Task::getTitle() const {
    return title;
}

std::string Task::getCategory() const {
    return category;
}

int Task::getPriority() const {
    return priority;
}

std::string Task::getStatus() const {
    return status;
}

// Better display
void Task::display() const {

    std::cout
        << "------------------------------------\n";

    std::cout
        << "Type      : "
        << getType()
        << "\n";

    std::cout
        << "Title     : "
        << title
        << "\n";

    std::cout
        << "Category  : "
        << category
        << "\n";

    // Priority label
    std::string priorityText;

    if (priority == 1)
        priorityText = "LOW";

    else if (priority == 2)
        priorityText = "MEDIUM";

    else if (priority == 3)
        priorityText = "HIGH";

    else
        priorityText = "UNKNOWN";

    std::cout
        << "Priority  : "
        << priorityText
        << "\n";

    std::cout
        << "Status    : "
        << status
        << "\n";

    std::cout
        << "Urgency   : "
        << getUrgency()
        << "\n";

    std::cout
        << "------------------------------------\n";
}