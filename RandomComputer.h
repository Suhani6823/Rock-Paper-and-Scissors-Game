#include "Computer.h"
#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

class RandomComputer:public Computer{
public:
    RandomComputer();
    char MakeMove();
};

#endif