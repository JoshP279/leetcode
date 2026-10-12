#include "Solution.h"
#include <vector>


std::vector<std::vector<int>>  Solution::generate(int numRows) {
	if (numRows == 0) return {};
	if (numRows == 1) return { {1} };

	std::vector<std::vector<int>> prevRows = generate(numRows - 1);
	std::vector<int> newRow = std::vector<int>(numRows, 1);

	for (int i = 1; i < numRows - 1; i++) {
		newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
	}

	prevRows.push_back(newRow);
	return prevRows;
}