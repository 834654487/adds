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
        cout<<"\nPlayer name"<<player1->getName()<<":"<<play1<<"\nComputer:"<<play2<<endl;
        if(play1==play2){
            cout<<"once again\n ";
            return this->refGame(player1,player2);

        }else if((play1=='r' && play2=='p') || (play1=='p' && play2=='s') ||(play1=='s' && play2=='r')){
        return 'L';
        }
        else return 'w';
        
    
    }


void Referee::play(){
    cout<<"let's play rock,paper,scissor. Enter your name:"<<endl;
        string playername;
        cin>>playername;
        Human *player = new Human(playername);
        Computer *ai = new Computer();
        Referee *refe = new Referee();
        if(refe->refGame(player, ai)=='w'){
            cout<<"win!\n";


        }else cout<<"lose!\n";

}
