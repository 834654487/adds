#pragma once
#include "Player.h"
class Crescendo :public Player {
public:
	char makeMove();
	Crescendo();
	string getName() {
		return "Crescendo";
	}
private:
	int now;
};
