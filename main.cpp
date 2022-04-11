#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include <iostream>
using namespace std;


int main() {
	vector<int> L;
	for (int i = 0; i < 20; i++) {
		int num;
		cin >> num;
		L.push_back(num);
	}
	vector<int> L1 = MapAbsoluteValue().map(L);
	vector<int> L2 = MapTriple().map(L1);
	vector<int> L3 = FilterForTwoDigitPositive().filter(L2);
	vector<int> L4 = FilterOdd().filter(L3);
	cout << ReduceMinimum().reduce(L4) << "," << ReduceGCD().reduce(L4) << endl;
	return 0;
}