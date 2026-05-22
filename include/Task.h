#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>

class Task {
protected:
    std::string title;
    std::string category;
    int priority; // 1 low, 2 medium, 3 high
    std::string status;

public:
    Task();
    Task(std::string t, std::string c, int p, std::string s);

    virtual void display() const;
    virtual int getUrgency() const = 0;

    std::string getTitle() const;
    std::string getCategory() const;
    int getPriority() const;
    std::string getStatus() const;

    void setStatus(const std::string& s);

    bool operator<(const Task& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Task& task);

    virtual std::string getType() const = 0;

    virtual ~Task();
};

#endif