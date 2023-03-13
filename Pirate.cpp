#include"Pirate.h"
#include<iostream>
using namespace std;
Pirate::Pirate()
{
}

string Pirate::getName()
{
    return "Pirate";
}
int Pirate::getResult(Move * enemy)
{
    if (enemy->getName() == "Pirate")
    {
        return 1;
    }
    else if (enemy->getName() == "Monkey" || enemy->getName() == "Robot" )
    {
        return 2;
    }
    else {
        return 3;
    } 
}
Pirate::~Pirate()
{
}