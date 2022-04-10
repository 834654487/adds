#include "reduceGCD.h"

int ReduceGCD::binaryOperator(int a, int b) {
	return (b > 0 ? binaryOperator(b, a % b) : a);
}