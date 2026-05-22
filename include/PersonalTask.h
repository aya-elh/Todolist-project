#ifndef PERSONALTASK_H
#define PERSONALTASK_H

#include "Task.h"

class PersonalTask : public Task {
public:
    PersonalTask(std::string t, std::string c, int p, std::string s);

    int getUrgency() const override;
    std::string getType() const override;
};

#endif