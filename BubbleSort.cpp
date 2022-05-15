#include "BubbleSort.h"


std::vector<int> BubbleSort::sort(std::vector<int> list) {
	for (std::vector<int>::iterator iter1 = list.begin(); iter1 != list.end(); iter1++) {
		for (std::vector<int>::iterator iter2 = iter1 + 1; iter2 != list.end(); iter2++) {
			if (*iter1 > *iter2) {
				int temp = *iter1;
				*iter1 = *iter2;
				*iter2 = temp;
			}
		}
	}
	return list;
}