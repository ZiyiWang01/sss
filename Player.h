#ifndef PLAYER_H
#define PLAYER_H
#include"Move.h"

#include <string>
using namespace std;


class Player 
{
public:
Player(); 
virtual Move* makeMove() = 0; 
virtual string getName()=0; 
~Player(); 
protected:
string name; 
};

#endif
