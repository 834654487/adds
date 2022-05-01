#include "BitFlipProb.h"
#include<iostream>
#include<string>
using namespace std;


BitFlipProb::BitFlipProb(double value) {
	p = value;
}


Individual BitFlipProb::mutate(Individual obj, int k) {
	double value = 1000 * p;
	for (int i = 0; i < obj.getLength(); i++) {
		if (rand() % 1001 <= value) {
			obj.flipBit(i + 1);
		}
	}
	return obj;
}