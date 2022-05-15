#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {

	char line[1024];
	std::cin.getline(line, 1024);
	std::vector<int> vec;
	int val = 0;
	bool flag = false;
	bool sign = true;
	for (int i = 0; line[i] != '\0'; i++) {
		if (line[i] == ' ') {
			if (!sign)
				val = -val;
			sign = true;
			vec.push_back(val);
			val = 0;
			flag = false;
		}
		else if (line[i] == '-') {
			sign = false;
		}
		else if (line[i] == '+') {
			sign = true;
		}
		else {
			val = val * 10 + (line[i] - '0');
			flag = true;
		}
	}
	if (flag) {
		if (!sign)
			val = -val;
		vec.push_back(val);
	}

	vec = QuickSort().sort(vec);
	if (RecursiveBinarySearch().search(vec, 1)) {
		std::cout << "true ";
	}
	else {
		std::cout << "false ";
	}
	for (std::vector<int>::size_type i = 0; i < vec.size(); i++) {
		std::cout << vec[i];
		if (i != vec.size() - 1) {
			std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return 0;
}