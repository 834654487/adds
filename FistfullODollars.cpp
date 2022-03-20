#include "FistfullODollars.h"
char FistfullODollars::makeMove() {
	if (now == 0) {
		now = (now + 1) % 3;
		return 'R';
	}
	else if (now == 1) {
		now = (now + 1) % 3;
		return 'P';
	}
	else {
		now = (now + 1) % 3;
		return 'P';
	}
}
FistfullODollars::FistfullODollars() {
	now = 0;
}
