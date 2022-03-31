#include <iostream>
#include <array>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Tournament.h"
#include "Referee.h"

Tournament::Tournament() {

}

Player * Tournament::run(std::array<Player *, 8> competitors){
    Referee referee;
    char total_res[5];
    Player * winners[4]; //winners array
    int p1wins=0; //count for total_res array
    int p2wins=0;
    int win_count = 0; //winner count

    for(int i=0;i<7;i++) { //ROUND 1 matches players 1-2, 3-4, 5-6, 7-8
        for (int k=0;k<5;k++) { //each bracket plays 5 rounds
            total_res[k] = referee.refGame(competitors[i],competitors[i+1]);
        //check number of wins & losses in terms of player with lower index
            if(total_res[k] == 'W') {
                p1wins++;
            }
            if(total_res[k] == 'L') {
                p2wins++;
            }
        }
        if(p1wins>=p2wins) { //lower index player win or lose
            winners[win_count] = competitors[i];
        }
        else {
            winners[win_count] = competitors[i+1];
        }
        win_count++;
        p1wins=0; //resetting counters
        p2wins=0;
        //total_res[5] = {0};
         i++;
    }
    //winners[4]={0}; //reset winner array
    win_count = 0;

    for(int i=0;i<3;i++) { //ROUND 2 matches winners 1-2 3-4
        for(int k=0;k<5;k++) {
            total_res[k] = referee.refGame(winners[i],winners[i+1]);
         //check number of wins & losses in terms of player with lower index
            if(total_res[k] == 'W') {
                p1wins++;
            }
            if(total_res[k] == 'L') {
                p2wins++;
            }

        }
        if(p1wins>=p2wins) { //lower index player win or lose
            winners[win_count] = winners[i];
        }
        else {
            winners[win_count] = winners[i+1];
        }
        win_count++;
        p1wins=0; //resetting counters
        p2wins=0;
        total_res[5] = {0};
        i++;
    }

    win_count = 0;


//ROUND 3 matches winners 1-2
    for(int k=0;k<5;k++) {
        total_res[k] = referee.refGame(winners[0],winners[1]);

//check number of wins & losses in terms of player with lower index
        if(total_res[k] == 'W') {
            p1wins++;
        }
        if(total_res[k] == 'L') {
            p2wins++;
        }
    }
    if(p1wins>=p2wins) { //lower index player win or lose
        return winners[0];
    }
    else {
        return winners[1];
    }
    return winners[0];
}

//competitors[win_pos[5]]
