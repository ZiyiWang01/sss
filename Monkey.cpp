#include "Monkey.h"
#include<iostream>
using namespace std;

Monkey::Monkey(){

}

string Monkey::getName()
{
    string move = "Monkey";
    return move;
}

int Monkey::getResult(Move * enemy)
{
    if (enemy->getName() == "Monkey")
    {
        return 1;//tie
    }
    else if (enemy->getName()== "Ninja" || enemy->getName() == "Robot" ){
        return 2;//win
    }
    else {
        return 3;//lose
    } 
}

Monkey::~Monkey()
{

}

