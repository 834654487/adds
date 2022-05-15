#ifndef _BUBBLE_SORT_H
#define _BUBBLE_SORT_H

#include "Sort.h"

class BubbleSort : public Sort{

public:
	virtual std::vector<int> sort(std::vector<int> list);
};

#endif