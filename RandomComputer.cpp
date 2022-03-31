#include <stdlib.h>
#include <time.h>
#include "RandomComputer.h"
#include <iostream>
using namespace std;

RandomComputer::RandomComputer() //this double colon is called the binary scope resolution operator
{
}

char RandomComputer::MakeMove()
{
    srand (time(NULL));
    int move = rand()%3;
    
    if (move==0) {
        return 'R';
    }

    else if (move==1) {
        return 'P';
    }
    else return 'S';
}
