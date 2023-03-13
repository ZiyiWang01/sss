#include"Paper.h"
#include<iostream>
using namespace std;
Paper::Paper(){

}

string Paper::getName()
{
    return "Paper";
}

int Paper::getResult(Move * enemy)
{
    if (enemy->getName() == "Paper")
    {
        return 1;
    }
    else if (enemy->getName() == "Rock")
    {
        return 2;
    }
    else 
    {
        return 3;
    } 
}

Paper::~Paper()
{
    
}