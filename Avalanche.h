#pragma once
#include "Computer.h"
class Avalanche :public Computer{
public:
	char makeMove();
	string getName() {
		return "Avalanche";
	}
};