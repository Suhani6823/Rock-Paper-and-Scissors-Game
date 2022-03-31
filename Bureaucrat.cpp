#include "Computer.h"
#include "Bureaucrat.h"
#include <iostream>
using namespace std;

Bureaucrat::Bureaucrat() //this double colon is called the binary scope resolution operator
{
}

char Bureaucrat::MakeMove()
{
    Move='P';
    return Move;
}
