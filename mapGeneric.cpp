#include "mapGeneric.h"

vector<int> MapGeneric::map(vector<int> vec) {
	vector<int> vecMap;
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
		vecMap.push_back(f(*iter));
	}
	return vecMap;
}