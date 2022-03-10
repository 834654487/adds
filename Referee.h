#ifndef REFEREE_H
#define REFEREE_H
#include"Human.h"
#include"Computer.h"
#include<iostream>
#include<string>
using namespace std;
class Referee{
    public:
    Referee();
    char refGame(Human*, Computer*);
    void play();



};
#endif