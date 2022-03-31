#include "Computer.h"
#include "PaperDoll.h"
#include <iostream>
using namespace std;

PaperDoll::PaperDoll() //this double colon is called the binary scope resolution operator
{
    counter=0;
    c2=0;
}
char PaperDoll::MakeMove()
{
    if (c2==5){
        c2=0;
        counter=0;
    }
    if (counter>2){
        counter=0;
    }
    char arrayMove[3]={'P', 'S', 'S' };
    Move=arrayMove[counter];
    counter++;
    c2++;
    return Move;
}
