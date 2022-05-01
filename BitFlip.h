#ifndef _BIT_FLIP_H
#define _BIT_FLIP_H

#include "Mutator.h"

class BitFlip : public Mutator{

public:
	virtual Individual mutate(Individual obj, int k);
};

#endif