#ifndef COMPUTER_H
#define COMPUTER_H
#include<iostream>
#include <array>
#include<string>
using namespace std;
class Player{
    public:
    virtual char makeMove() = 0;
    virtual string getName() = 0;
};
#endif 
