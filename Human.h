#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h" 
#include "Move.h"

using namespace std;


class Human:
public Player 
{ 
    public:
    Human(string name="Human"); 
    Move* makeMove(); 
    string getName(); 
};

#endif