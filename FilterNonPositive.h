#ifndef _FILTER_NON_POSITIVE_H
#define _FILTER_NON_POSITIVE_H

#include "filterGeneric.h"

class FilterNonPositive : public FilterGeneric {

private:
	bool g(int a);
};

#endif