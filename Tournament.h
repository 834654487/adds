#pragma once
#include "Computer.h"
class Tournament {
public:
	Computer* run(Computer* competitors[8]);
	string getName() {
		return "Tournament";
	}
};