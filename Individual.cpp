#include "Individual.h"


Individual::Individual(std::string str):binaryString(str) {

}

Individual::Individual(unsigned int length) :binaryString(length, '0') {

}

Individual::Individual(const Individual& obj) {
	binaryString = obj.binaryString;
}

std::string Individual::getString() {
	return binaryString;
}

int Individual::getBit(int pos) {
	if (pos >= 0 && pos < binaryString.size()) {
		return binaryString[pos] - '0';
	}
	else {
		return -1;
	}
}

void Individual::flipBit(int pos) {
	if (pos >= 1 && pos <= binaryString.size()) {
		if (binaryString[pos-1] == '0') {
			binaryString[pos-1] = '1';
		}
		else {
			binaryString[pos-1] = '0';
		}
	}
}

int Individual::getMaxOnes() {
	int begin = -1, end = -1, maxLen = 0;
	for (int i = 0; i < binaryString.size(); i++) {
		if (binaryString[i] == '0') {
			if (begin != -1) {
				end = i - 1;
				int len = end - begin + 1;
				if (len > maxLen) {
					maxLen = len;
				}
				begin = -1;
				end = -1;
			}
		}
		else if (binaryString[i] == '1') {
			if (begin == -1) {
				begin = i;
			}
		}
	}
	if (begin != -1) {
		end = binaryString.size() - 1;
		int len = end - begin + 1;
		if (len > maxLen) {
			maxLen = len;
			begin = -1;
			end = -1;
		}
	}
	return maxLen;
}

int Individual::getLength() {
	return binaryString.size();
}
