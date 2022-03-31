#include "Computer.h"
#include "Crescendo.h"
#include <iostream>
using namespace std;

Crescendo::Crescendo() //this double colon is called the binary scope resolution operator
{
    counter=0;
    c2=0;
}

char Crescendo::MakeMove()
{
    if (c2==5){
        c2=0;
        counter=0;
    }
    if (counter>2){
        counter=0;
    }
    char arrayMove[3]={'P', 'S', 'R' };
    Move=arrayMove[counter];
    counter++;
    c2++;
    return Move;
}
