#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    Player();
    virtual char MakeMove();
protected:
    char Move;
};

#endif