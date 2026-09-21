#include "Solution.h"
#include <iostream>
#include <vector>

void displayVector(std::vector<int>& digits) {
	for (int value : digits) {
		std::cout << value << " ";
	}
}

std::vector<int> Solution::plusOne(std::vector<int>& digits) {
	std::vector<int> newVec;

	int n = digits.size();

	for (int i = 0; i < n; i++) {
		newVec.push_back(digits[i]);
	}

	int carry = 1;

	for (int i = n - 1; i >= 0; i--) {
		int sum = newVec[i] + carry;
		newVec[i] = sum % 10;
		carry = sum / 10;
	}

	if (carry) { 
		newVec.insert(newVec.begin(), carry);
	}

	displayVector(newVec);
	return newVec;
}

