#include "RecursiveBinarySearch.h"


bool RecursiveBinarySearch::search(std::vector<int> vec, int val) {
	return (searchRecursive(vec, val, 0, vec.size() - 1) != -1);
}


int RecursiveBinarySearch::searchRecursive(std::vector<int>& vec, int val, 
	int start, int end) {
	
	if (start >= end) {
		if (vec[end] == val) {
			return end;
		}
		else {
			return -1;
		}
	}
	int middle = start + (end - start + 1) / 2;
	if (vec[middle] < val) {
		return searchRecursive(vec, val, middle + 1, end);
	}
	else if (vec[middle] == val) {
		return middle;
	}
	else {
		return searchRecursive(vec, val, start, middle - 1);
	}
}