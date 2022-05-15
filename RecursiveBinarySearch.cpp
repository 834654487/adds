#include "RecursiveBinarySearch.h"


bool RecursiveBinarySearch::search(std::vector<int> vec, int val) {
	return (searchRecursive(vec, val, 0, vec.size() - 1) != -1);
}


int RecursiveBinarySearch::searchRecursive(std::vector<int>& vec, int val,
	int start, int end) {

	if (start == end) {
		if (vec[start] == val) {
			return start;
		}
		else {
			return -1;
		}
	}
	if (start + 1 == end) {
		if (vec[start] == val) {
			return start;
		}
		if (vec[end] == val) {
			return end;
		}
		return -1;
	}
	int middle = start + (end - start + 1) / 2;
	if (vec[middle] == val) {
		return middle;
	}
	else if (vec[middle] > val) {
		searchRecursive(vec, val, start, middle - 1);
	}
	else {
		searchRecursive(vec, val, middle + 1, end);
	}
}