#pragma once
#include "Player.h"
class FistfullODollars :public Player {
public:
	char makeMove();
	FistfullODollars();
	string getName() {
		return "FistfullODollars";
	}
private:
	int now;
};
