#include "Computer.h"
#include "FistfullODollars.h"
#include <iostream>
using namespace std;

FistfullODollars::FistfullODollars() //this double colon is called the binary scope resolution operator
{
    counter=0;
    c2=0;
}

char FistfullODollars::MakeMove()
{
    if (c2==5){
        c2=0;
        counter=0;
    }
    if (counter>2){
        counter=0;
    }
    char arrayMove[3]={'R', 'P', 'P' };
    Move=arrayMove[counter];
    counter++;
    c2++;
    return Move;
}
