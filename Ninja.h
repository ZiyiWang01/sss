#ifndef NINJA_H_
#define NINJA_H_
#include"Move.h"
#include<iostream>
using namespace std;

class Ninja: 
public Move
{
public:
    Ninja();
    ~Ninja();
    
    int getResult(Move* enemy);
    string getName();
    
};
#endif