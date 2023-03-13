#ifndef MONKEY_H_
#define MONKEY_H_
using namespace std;
#include "Move.h"
#include<iostream>


class Monkey: 
public Move
{
public:
    Monkey();
    ~Monkey();
    
    int getResult(Move* enemy);
    string getName();
    
};
#endif