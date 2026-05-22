#ifndef WORKTASK_H
#define WORKTASK_H

#include "Task.h"

class WorkTask : public Task {
public:
    WorkTask(std::string t, std::string c, int p, std::string s);

    int getUrgency() const override;
    std::string getType() const override;
};

#endif