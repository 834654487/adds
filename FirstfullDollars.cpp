#include "FirstfullDollars.h"
char FirstfullDollars::makeMove() {
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
FirstfullDollars::FirstfullDollars() {
	now = 0;
}