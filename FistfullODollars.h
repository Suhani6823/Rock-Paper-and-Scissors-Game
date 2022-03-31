#include "Computer.h"
#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H

class FistfullODollars:public Computer{
public:
    FistfullODollars();
    char MakeMove();
private:
    int counter;
    int c2;
};

#endif