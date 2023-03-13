#include<iostream>
#include"Rock.h"
using namespace std;
Rock::Rock(){

}

string Rock::getName()
{
    return "Rock";
}

int Rock::getResult(Move * enemy)
{
    if (enemy->getName() == "Rock")
    {
        return 1;
    }
    else if (enemy->getName() == "Scissors")
    {
        return 2;
    }
    else {
        return 3;
    } 
}


Rock::~Rock(){

}