#ifndef REFEREE
#define REFEREE
#include"Referee.h"
#include<iostream>
#include<string>
using namespace std;
Referee::Referee(){

}
char Referee::refGame(Player* player1, Player* player2){


    char play1 = player1->makeMove();
       char play2 = player2->makeMove();
        cout<<"let's play:"<<play1<<"\nComputer:"<<play2<<endl;
        if(play1==play2){
            cout<<"once again\n ";
            return this->refGame(player1,player2);

        }else if((play1=='R' && play2=='P') || (play1=='P' && play2=='S') ||(play1=='S' && play2=='R')){
        return 'L';
        }
        else return 'w';
        
    
    }
#endif

