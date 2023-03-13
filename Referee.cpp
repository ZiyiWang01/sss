#include<iostream>
#include "Referee.h"

Referee::Referee() {}


Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
   
   int winnerNum=move1->getResult(move2);
   if(winnerNum==2){
    return player1;
   }
   else if(winnerNum==3){
    return player2;
   }
   else{
    return nullptr;
   }
}

Referee::~Referee(){
  
}
