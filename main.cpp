#include<iostream>
#include<string>

using namespace std;
//human player class
class HumanPlayer{
    private:
    string name;
    pubilc:
    string getName(){
        return name;
        
        }

    HumanPlayer(string name){
        this->name = name;
    
    }// constructor
    char makeMove(){
        cout<<this->name<<"Enter R for rock, P for paper and S for scissor";
        char r;
        cin>>r;
        if (r=='r'||r=='s'||r=='p'){
            return r;
            else return this->makeMove();
        }
    }

};
class Computer{
    public:
    Computer(){

    }
    Char makeMove(){
        int r =(rand()%3);
        return (r==0?'r':(r==1?'p':'s'));
    }
}
class Referee{
    pubilic:
    Referee(){

    }

    char Referee::refGame(Human *, Computer *){
    char play1 = HumanPlayer->makeMove();
        char play2 = Computer->makeMove();
        cout<<"\nPlayer name"<<play1->getName()<<":"<<play1<<"\nComputer:"<<play2<<endl;
        if(play1==play2){
            cout<<"once again\n ";
            return this->refGame(play1,play2);

        }else if((play1=='r' && play2=='p') || (play1=='p' && play2=='s') ||(play1=='s' && play2=='r')){
        return 'L';
        }
        else return 'w';
        
    
    }

    void play(){
        cout<<"let's play rock,paper,scissor. Enter your name:";<<endl;
        string playername;
        cin>>playername;
        Human *player = new Human(playername);
        Computer *ai = new Computer();
        Refree *refe = new Referee();
        if(refe->ref(player, ai)=='w'){
            cout<<"win!\n";


        }else cout<<"lose!\n";

    }
}



char Referee::refGame(Human *player1, Computer *player2){
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