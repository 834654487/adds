#include "Rearrange.h"
#include<iostream>
#include<string>
using namespace std;

Individual Rearrange::mutate(Individual obj, int k) {

	std::string str1, str2;
	for (int i = 0; i < obj.getLength(); i++) {
		if (i + 1 < k) {
			str1 += char('0' + obj.getBit(i));
		}
		else {
			str2 += char('0' + obj.getBit(i));
		}
	}
	str2 = str2 + str1;
	for (int i = 0; i < obj.getLength(); i++) {
		if (obj.getBit(i) != str2[i] - '0') {
			obj.flipBit(i);
		}
	}
	return obj;
}