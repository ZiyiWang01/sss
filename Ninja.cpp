#include"Ninja.h"
#include<iostream>
using namespace std;


Ninja::Ninja(){

}

string Ninja::getName()
{
    return "Ninja";
}

int Ninja::getResult(Move * enemy)
{
    if (enemy->getName() == "Ninja")
    {
        return 1;
    }
    else if (enemy->getName() == "Pirate" || enemy->getName() == "Zombie" )
    {
        return 2;
    }

    else 
    {
        return 3;
    } 
}
Ninja::~Ninja(){
    
}