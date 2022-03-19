#pragma once
#include "Player.h"
class RandomComputer :public Player{
public:
	char makeMove();
	string getName() {
		return "RandomComputer";
	}
};
