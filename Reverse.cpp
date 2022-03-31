#include"Reverse.h"
#include<iostream>
#include<string>
using namespace std;
Reverse::Reverse(){
    
}
int Reverse::reverseDigit(int value){
    if([value] < 0 ){
        return;
        
    }
    reverseDigit(value+1);
    cout<<[value]<<"";
    
}

std::string Reverse::reverseString(std::string letters){
    if(letters == '\0'){
        return;
    }
    std::string reverseString(letters+1);
    cout<<[letter]<<"";
    
}

