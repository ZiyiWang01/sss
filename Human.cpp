// include the head
#include "Human.h"
#include"Move.h"
#include"Pirate.h"
#include"Ninja.h"
#include"Monkey.h"
#include"Zombie.h"
#include"Rock.h"
#include"Paper.h"
#include"Scissors.h"
#include"Robot.h"


using namespace std;
#include <iostream>


Human::Human(std::string name) {
this->name = name;
}

// get the input to judge
Move* Human::makeMove() {
string USERmove;
cin >> USERmove;


if(USERmove=="Rock")
{
    Move* human=new Rock();
    return human;
}

else if(USERmove=="Monkey")
{
    Move* human=new Monkey();
    return human;
}

else if(USERmove=="Scissors")
{
    Move* human=new Scissors();
    return human;
}

else if(USERmove=="Paper")
{
    Move* human=new Paper();
    return human;
}

//else if(USERmove=="Pirate")
//{
    //Move* human=new Pirate();
    //return human;
//}
else if(USERmove=="Robot")
{
    Move* human=new Robot();
    return human;
}

else if(USERmove=="Zombie")
{
    Move* human=new Zombie();
    return human;
}
else if(USERmove=="Ninja")
{
    Move* human=new Ninja();
    return human;
}

else{

    Move* human=nullptr;
    return human;
}

}


std::string Human::getName() {
return name;
}
