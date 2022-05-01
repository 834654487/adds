#ifndef _BIT_FLIP_PROB_H
#define _BIT_FLIP_PROB_H

#include "Mutator.h"

class BitFlipProb : public Mutator {

public:
	BitFlipProb(double value);
	virtual Individual mutate(Individual obj, int k);

private:
	double p;
};

#endif