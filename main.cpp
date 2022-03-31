#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Avalanche.h"
#include "RandomComputer.h"
#include "Crescendo.h"
#include "Bureaucrat.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "Toolbox.h"
#include "Computer.h"
#include "Tournament.h"
#include "Referee.h"

using namespace std;

int main(){
    Avalanche *player1 = new Avalanche();
    Bureaucrat *player2 = new Bureaucrat();
    Bureaucrat *player3 = new Bureaucrat();
    Toolbox *player4 = new Toolbox();
    Toolbox *player5 = new Toolbox();
    Crescendo *player6 = new Crescendo();
    Crescendo *player7 = new Crescendo();
    FistfullODollars *player8 = new FistfullODollars();

    
    
    Tournament test;
    std::array<Player*, 8> players = {player1,player2,player3,player4,player5,player6,player7,player8};
    test.run(players);

    return 0;   
}