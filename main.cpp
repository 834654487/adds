#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

Individual* execute(Individual* indPtr, Mutator* mPtr, int k);

int main() {
	std::string binarystr1, binarystr2;
	int k1, k2;
	std::cin >> binarystr1 >> k1 >> binarystr2 >> k2;
	Individual obj1(binarystr1), obj2(binarystr2);
	Mutator* muObj1 = new BitFlip;
	Mutator* muObj2 = new Rearrange;
	Individual* newObj1 = execute(&obj1, muObj1, k1);
	Individual* newObj2 = execute(&obj2, muObj2, k2);

	std::cout << newObj1->getString() << ' ' <<
		newObj2->getString() << ' ' <<
		newObj2->getMaxOnes() << std::endl;
	return 0;
}

Individual* execute(Individual* indPtr, Mutator* mPtr, int k) {
	return new Individual{ mPtr->mutate(*indPtr, k) };
}

