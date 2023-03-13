#ifndef PAPER_H_
#define PAPER_H_
#include<iostream>
#include"Move.h"
using namespace std;

class Paper: public Move
{
public:
    Paper();
    ~Paper();
    
    int getResult(Move* enemy);
    string getName();
    
};
#endif