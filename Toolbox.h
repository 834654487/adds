#pragma once
#include "Player.h"
class Toolbox :public Player {
public:
	char makeMove();
	string getName() {
		return "Toolbox";
	}
};
