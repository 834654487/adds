#ifndef HUMAN_H
#define HUMAN_H
#include<iostream>
#include<string>
using namespace std;
class Human{
    private:
    std::string name;
    public:
    std::string getName();
    Human(std::string name);
    char makeMove();



};
#endif


