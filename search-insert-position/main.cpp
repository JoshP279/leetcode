#include "Solution.h"
#include <vector>
#include <iostream>

int main() {


	std::vector<int> vec = { 1, 3, 5, 6 };
	auto index = Solution().searchInsert(vec, 7);
	std::cout << index;
	return 0;
}