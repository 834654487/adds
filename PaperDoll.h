#pragma once
#include "Computer.h"
class PaperDoll :public Computer {
public:
	char makeMove();
	PaperDoll();
	string getName() {
		return "PaperDoll";
	}
private:
	int now;
};