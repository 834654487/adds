#include"Computer.h"
#include<iostream>
#include<string>
using namespace std;
Computer::Computer(){

}

char Computer::makeMove(){
    int r =(rand()%3);
    
    return (r==0?'r':(r==1?'p':'s'));

}




