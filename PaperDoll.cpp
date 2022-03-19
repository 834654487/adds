#include "PaperDoll.h"
char PaperDoll::makeMove() {
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
		return 'S'; 
	}
}
PaperDoll::PaperDoll() {
	now = 0;
}