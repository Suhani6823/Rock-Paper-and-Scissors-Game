#include "Human.h"
#include "Player.h"
#include <iostream>
using namespace std;

Human::Human() //this double colon is called the binary scope resolution operator
{
}

char Human::MakeMove(){
    cout<<"Enter move: "<<endl;
    cin>>Move; 
    return Move;
}