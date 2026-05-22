#include "PersonalTask.h"

PersonalTask::PersonalTask(std::string t, std::string c, int p, std::string s)
    : Task(t, c, p, s) {}

int PersonalTask::getUrgency() const {
    return priority * 1;
}

std::string PersonalTask::getType() const {
    return "Personal";
}