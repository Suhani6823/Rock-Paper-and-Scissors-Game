#include "Computer.h"
#include "Toolbox.h"
#include <iostream>
using namespace std;

Toolbox::Toolbox() //this double colon is called the binary scope resolution operator
{
}

char Toolbox::MakeMove()
{
    Move='S';
    return Move;
}
