#include "BitFlip.h"
#include<iostream>
#include<string>
using namespace std;

Individual BitFlip::mutate(Individual obj, int k) {
	if (k > obj.getLength()) {
		k = k % obj.getLength();
	}
	obj.flipBit(k);
	return obj;
}