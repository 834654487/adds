#include"Human.h"
#include<string.h>
#include<iostream>
using namespace std;

Human::Human(){


}

char Human::makeMove(){
    cout<<"Enter R for rock, P for paper and S for scissor";
        char r;
        cin>>r;
        if (r=='R'||r=='S'||r=='P'){
            return r;
            }

        else{
            return this->makeMove();
        }

}
