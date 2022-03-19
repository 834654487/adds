#pragma once
#include "Computer.h"
class Bureaucrat :public Computer {
public:
	char makeMove();
	string getName() {
		return "Bureaucrat";
	}
};