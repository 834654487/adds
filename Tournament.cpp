#include "Tournament.h"
#include "Referee.h"

bool check(Computer* a, Computer* b) {
	int win1, win2, i;
	win1 = win2 = 0;
	for (i = 0; i < 5; i++) {
		char t1 = a->makeMove();
		char t2 = b->makeMove();
		if (t1 == t2) {
			continue;
		}
		if (t1 == 'R') {
			if (t2 == 'P') {
				win2++;
			}
			else {
				win1++;
			}
		}
		else if (t1 == 'P') {
			if (t2 == 'R') {
				win1++;
			}
			else {
				win2++;
			}
		}
		else {
			if (t2 == 'R') {
				win2++;
			}
			else {
				win1++;
			}
		}
	}
	if (win1 >= win2) {
		return true;
	}
	else {
		return false;
	}
}

Computer* Tournament::run(Computer* competitors[8]) {
	int dis = 1;
	Referee r;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 8; j += 2 * dis) {
			if (check(competitors[j], competitors[j + dis])) {
				continue;
			}
			else {
				Computer* t = competitors[j];
				competitors[j] = competitors[j + dis];
				competitors[j + dis] = t;
			}
		}
		dis *= 2;
	}
	return competitors[0];
}