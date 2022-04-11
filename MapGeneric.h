#ifndef _MAP_GENERIC_H
#define _MAP_GENERIC_H

#include <vector>
using namespace std;

class MapGeneric {

public:
	vector<int> map(vector<int> vec);

private:
	virtual int f(int a) = 0;
};

#endif