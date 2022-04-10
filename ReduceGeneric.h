#ifndef _REDUCE_GENERIC_H
#define _REDUCE_GENERIC_H

#include <vector>
using namespace std;

class ReduceGeneric {

public:
	int reduce(vector<int> vec);

private:
	virtual int binaryOperator(int a, int b) = 0;
};

#endif