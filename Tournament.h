#include <array> 
#include "Player.h"
#ifndef TOURNAMENT_H
#define TOURNAMENT_H

using namespace std;

class Tournament{
public:
    Tournament();
    Player * run(std::array<Player *, 8>  competitors);
};

#endif