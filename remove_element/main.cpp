#include "Solution.h"
#include <iostream>
int main() {
	std::vector nums = { 3, 2, 2, 3 };

	auto val = 2;

	auto k = Solution().removeElement(nums, val);

	std::cout << k;
	return 0;
}