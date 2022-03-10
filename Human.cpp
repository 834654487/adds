#include"Human.h"
#include<string.h>
#include<iostream>
using namespace std;
std::string Human::getName(){
    return name;
    
}
Human::Human(std::string name){
    this->name=name;


}

char Human::makeMove(){
    cout<<this->name<<"Enter R for rock, P for paper and S for scissor";
        char r;
        cin>>r;
        if (r=='r'||r=='s'||r=='p'){
            return r;
            }

        else{
            return this->makeMove();
        }

}
