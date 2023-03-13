#include"Move.h"
#include"Rock.h"
#include "Computer.h"
using namespace std;


Computer::Computer() 
{
}


Move* Computer::makeMove() 
{
    // computer only use rock
    Move* computer = new Rock();
    return computer;
}

string Computer::getName()
{
    return "Computer";
}
