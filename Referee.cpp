#include <iostream>
#include "Player.h"
#include "Referee.h"
#include "Human.h"
#include "Computer.h"


Referee::Referee() {
}

char Referee::refGame(Player *player1, Player *player2) {
    char Move1 = player1->MakeMove();
    char Move2 = player2->MakeMove();

    if(Move1=='R') {
        switch(Move2) {
            case 'R':
                return 'T';

            case 'P':
                return 'L';

            case 'S':
                return 'w';

            default:
                return 'E';

        }
    }

    else if(Move1=='P') {
        switch(Move2) {
            case 'R':
                return 'w';

            case 'P':
                return 'T';

            case 'S':
                return 'L';

            default:
                return 'E';

        }
    }

    if(Move1=='S') {
        switch(Move2) {
            case 'R':
                return 'L';

            case 'P':
                return 'W';
            case 'S':
                return 'T';

            default:
                return 'E';

        }
    }
    return 'F'; //if everything breaks
}