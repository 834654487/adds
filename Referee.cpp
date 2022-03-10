#include"Referee.h"
#include"Human.h"
#include"Computer.h"
#include<iostream>
#include<string>
using namespace std;
Referee::Referee(){

}
char Referee::refGame(Human*, Computer*){
    Human*player1;
    Computer*player2;

    char play1 = player1->makeMove();
        char play2 = player2->makeMove();
        cout<<"let's play:"<<play1<<"\nComputer:"<<play2<<endl;
        if(play1==play2){
            cout<<"once again\n ";
            return this->refGame(player1,player2);

        }else if((play1=='r' && play2=='p') || (play1=='p' && play2=='s') ||(play1=='s' && play2=='r')){
        return 'L';
        }
        else return 'w';
        
    
    }



