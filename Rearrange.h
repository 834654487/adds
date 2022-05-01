#ifndef _REARRANGE_H
#define _REARRANGE_H

#include "Mutator.h"

class Rearrange : public Mutator {

public:
	virtual Individual mutate(Individual obj, int k);
};

#endif