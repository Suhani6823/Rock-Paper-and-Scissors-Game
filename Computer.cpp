#include "Computer.h"
#include <iostream>
using namespace std;

Computer::Computer() //this double colon is called the binary scope resolution operator
{
}

char Computer::MakeMove()
{
    Move='R';
    return Move;
}
