#include "reduceGeneric.h"

int ReduceGeneric::reduce(vector<int> vec) {
	if (vec.size() == 1) {
		return vec[0];
	}
	else {
		int r = vec[0];
		for (vector<int>::size_type i = 1; i < vec.size(); i++) {
			r = binaryOperator(r, vec[i]);
		}
		return r;
	}
}