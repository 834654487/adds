#include"Reverse.h"
#include<math.h>
#include<iostream>
#include<string>
using namespace std;
Reverse::Reverse(){
    
}
int Reverse::reverseDigit(int value){
    if(value < 10 ){
        return value; 
    }
    int len = 0;
    for(int i=value;i;i/=10){
        len++;
    }
    return value%10*(int)pow(10, len-1)+reverseDigit(value/10);
    
}

std::string Reverse::reverseString(std::string letters){
    size_t T=letters.size();
    if(T==1){
        return letters;
    }
    else{
        return letters[T-1]+reverseString(letters.substr(0, T-1));

    }

}

