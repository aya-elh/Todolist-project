#include "WorkTask.h"

WorkTask::WorkTask(std::string t, std::string c, int p, std::string s)
    : Task(t, c, p, s) {}

int WorkTask::getUrgency() const {
    return priority * 3;
}

std::string WorkTask::getType() const {
    return "Work";
}