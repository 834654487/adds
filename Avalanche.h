#pragma once
#include "Player.h"
class Avalanche :public Player{
public:
	char makeMove();
	string getName() {
		return "Avalanche";
	}
};
