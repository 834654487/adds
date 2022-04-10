#ifndef _FILTER_GENERIC_H
#define _FILTER_GENERIC_H

#include <vector>
using namespace std;

class FilterGeneric {

public:
	vector<int> filter(vector<int> vec);

private:
	virtual bool g(int a) = 0;
};

#endif