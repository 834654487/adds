#pragma once
#include "Computer.h"
class RandomComputer :public Computer{
public:
	char makeMove();
	string getName() {
		return "RandomComputer";
	}
};