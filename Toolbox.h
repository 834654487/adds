#pragma once
#include "Computer.h"
class Toolbox :public Computer {
public:
	char makeMove();
	string getName() {
		return "Toolbox";
	}
};