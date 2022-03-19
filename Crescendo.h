#pragma once
#include "Computer.h"
class Crescendo :public Computer {
public:
	char makeMove();
	Crescendo();
	string getName() {
		return "Crescendo";
	}
private:
	int now;
};