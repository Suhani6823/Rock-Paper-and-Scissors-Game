#include "Computer.h"
#ifndef TOOLBOX_H
#define TOOLBOX_H

class Toolbox:public Computer{
public:
    Toolbox();
    char MakeMove();
};

#endif