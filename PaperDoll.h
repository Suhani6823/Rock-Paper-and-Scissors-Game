#include "Computer.h"
#ifndef PAPERDOLL_H
#define PAPERDOLL_H

class PaperDoll:public Computer{
public:
    PaperDoll();
    char MakeMove();
private:
    int counter;
    int c2;
};

#endif