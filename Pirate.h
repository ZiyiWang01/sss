#ifndef PIRATE_H_
#define PIRATE_H_
#include"Move.h"
#include<iostream>
using namespace std;



class Pirate: 
public Move
{
public:
    Pirate();
    ~Pirate();
    
    int getResult(Move* enemy);
    string getName();
    
};
#endif