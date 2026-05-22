#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "TaskManager.h"

class FileManager {
public:
    static void save(const std::string& filename, TaskManager& manager);
    static void load(const std::string& filename, TaskManager& manager);
};

#endif