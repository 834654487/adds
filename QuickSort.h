#ifndef _QUICK_SORT_H
#define _QUICK_SORT_H

#include "Sort.h"

class QuickSort :public Sort{

public:
	virtual std::vector<int> sort(std::vector<int> list);

private:
	void quick_sort(std::vector<int>& list, int l, int r);
};

#endif