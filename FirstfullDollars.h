#pragma once
#include "Computer.h"
class FirstfullDollars :public Computer {
public:
	char makeMove();
	FirstfullDollars();
	string getName() {
		return "FirstfullDollars";
	}
private:
	int now;
};