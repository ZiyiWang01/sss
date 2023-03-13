#include"Scissors.h"
#include<iostream>
using namespace std;
Scissors::Scissors()
{
}

string Scissors::getName()
{
    return "Scissors";
}

int Scissors::getResult(Move * enemy)
{
    if (enemy->getName() == "Scissors")
    {
        return 1;
        
    }
    else if (enemy->getName() == "Paper")
    {
        return 2;
    }
    else {
        return 3;
    } 
}

Scissors::~Scissors(){
    
}