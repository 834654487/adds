#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include<string>
#include"Rearrange.h"
#include"BitFlip.h"
#include"BitFlipProb.h"
using namespace std;
Individual* execute(Individual* indPtr, Mutator* mPtr, int k);

int main() {
	return 0;
}

Individual* execute(Individual* indPtr, Mutator* mPtr, int k) {
	Individual obj = mPtr->mutate(*indPtr, k);
	Individual* newObj = new Individual(obj.getLength());
	for (int i = 0; i < obj.getLength(); i++) {
		if (obj.getBit(i) == 1) {
			newObj->flipBit(i);
		}
	}
	return newObj;
}