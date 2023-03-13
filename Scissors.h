#ifndef SCISSORS_H_
#define SCISSORS_H_
#include<iostream>
#include"Move.h"
using namespace std;
class Scissors: public Move
{
public:
    Scissors();
    ~Scissors();

    int getResult(Move* enemy);
    string getName();
    
};
#endif