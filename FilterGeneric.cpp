#include "FilterGeneric.h"

vector<int> FilterGeneric::filter(vector<int> vec) {
	vector<int> vecFilter;
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
		if (g(*iter)) {
			vecFilter.push_back(*iter);
		}
	}
	return vecFilter;
}