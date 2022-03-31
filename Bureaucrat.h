#include "Computer.h"
#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

class Bureaucrat:public Computer{
public:
    Bureaucrat();
    char MakeMove();
};

#endif