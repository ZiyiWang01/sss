#ifndef MOVE_H_
#define MOVE_H_

#include<iostream>
#include<string>

class Move
{
public:
    Move();
    virtual std::string getName()=0;
    virtual int getResult(Move* opponent)=0;
    ~Move();
};

#endif