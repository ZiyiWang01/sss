#include<iostream>
#include<string>
using namespace std;
#include "Human.h"
#include"Move.h"
#include"Rock.h"
#include"Paper.h"
#include"Scissors.h"
#include"Robot.h"
#include"Pirate.h"
#include"Ninja.h"
#include"Monkey.h"
#include"Zombie.h"
#include"Referee.h"
#include"Player.h"
#include"Computer.h"


int main(){
    Player* player1=new Human();
    Player* player2=new Computer();
    Player* player3=new Human();

    
    Referee* referee1=new Referee();
    //Referee* referee2=new Referee();
    Player* currentwinner=referee1->refGame(player1,player2);
    if(currentwinner==player1){
        cout<<"winner is: "<<player1->getName()<<endl;
    }
    else if(currentwinner==player3){
        cout<<"winner is:" <<player3->getName()<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }
    


    //referee2->refGame(player3,player1);
    return 0;
}