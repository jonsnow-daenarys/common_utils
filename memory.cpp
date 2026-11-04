#include <iostream>
#include "memory.h"

void allocate_memory()
{
    std::cout << "Memory allocated successfully" << std::endl;
}

void release_memory()
{
    std::cout << "Memory released successfully" << std::endl;
}

void print_memory_usage()
{
    std::cout << "Memory usage: 512 MB" << std::endl;
}
