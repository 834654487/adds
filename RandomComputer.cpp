#include "RandomComputer.h"
#include <cstdlib>
char RandomComputer::makeMove() {
	int value = rand() % 3;
	if (value == 0) {
		return 'S';
	}
	if (value == 1) {
		return 'P';
	}
	return 'R';
} 