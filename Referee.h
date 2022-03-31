#include "Player.h"
#include "Human.h"
#include "Computer.h"
#ifndef REFEREE_H
#define REFEREE_H

class Referee
{
public:
    char Result;
    Referee(); //say something like human player name won/lost against the computer player
    char refGame(Player *player1, Player *player2);
};

#endif
