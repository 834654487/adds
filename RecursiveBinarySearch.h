#ifndef _RECURESIVE_BINARY_SEARCH_H
#define _RECURESIVE_BINARY_SEARCH_H

#include <vector>

class RecursiveBinarySearch{

public:
	bool search(std::vector<int> vec, int val);

private:
	int searchRecursive(std::vector<int>& vec, int val, int start, int end);
};


#endif