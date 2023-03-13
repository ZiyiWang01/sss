#include"Robot.h"
#include<iostream>
using namespace std;
Robot::Robot(){

}

string Robot::getName()
{
    return "Robot";
}

int Robot::getResult(Move * enemy)
{
    if (enemy->getName() == "Robot")
    {
        return 1;
    }
    else if (enemy->getName() == "Ninja" || enemy->getName() == "Zombie" )
    {
        return 2;
    }
    else 
    {
        return 3;
    } 
}

Robot::~Robot()
{
    
}