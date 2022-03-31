#include<iostream>
#include"Reverse.h"
#include<string>
using namespace std;
int main(){
    Reverse O;
    std::string letters;
    int value;
    cin>>letters>>value;
    if(value<0){
        cout<<"ERROR"<<" " ;
        
    }else{
        cout<<O.reverseDigit(value)<<" ";
        cout<<O.reverseString(letters)<<" ";
    }
    return 0;
}