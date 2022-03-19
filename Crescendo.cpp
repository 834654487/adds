#include "Crescendo.h"
char Crescendo::makeMove() {
	if (now == 0) {
		now = (now + 1) % 3;
		return 'P';
	}
	else if (now == 1) {
		now = (now + 1) % 3;
		return 'S';
	}
	else {
		now = (now + 1) % 3;
		return 'R';
	}
}
Crescendo::Crescendo() {
	now = 0;
}