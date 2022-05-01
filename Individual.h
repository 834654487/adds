#ifndef _INDIVIDUAL_H
#define _INDIVIDUAL_H

#include <string>

class Individual {

public:
	Individual(unsigned int length);
	Individual(const Individual& obj);
	std::string getString();
	int getBit(int pos);
	void flipBit(int pos);
	int getMaxOnes();
	int getLength();

private:
	std::string binaryString;
};

#endif