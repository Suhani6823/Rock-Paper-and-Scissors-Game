#include "Computer.h"
#ifndef CRESCENDO_H
#define CRESCENDO_H

class Crescendo:public Computer{
public:
    Crescendo();
    char MakeMove();
private:
    int counter;
    int c2;
};

#endif
