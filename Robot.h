#ifndef ROBOT_H_
#define ROBOT_H_

#include "Move.h"
#include<iostream>

using namespace std;

class Robot: 
public Move
{
public:
    Robot();
    ~Robot();
    
    int getResult(Move* enemy);
    string getName();
    
};

#endif