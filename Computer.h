#ifndef COMPUTER_H
#define COMPUTER_H

#include"Move.h"
#include"Rock.h"
#include "Player.h"

class Computer: 
public Player 
{
public:
    // constructor
    Computer(); 

    // virtual function 
    virtual Move* makeMove(); 

    virtual std::string getName();
};

#endif
