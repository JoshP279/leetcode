#include "Solution.h"

int Solution::searchInsert(std::vector<int>& nums, int target) {
	int i = 0;

	for (const auto num : nums) {
		if (num == target || num > target) {
			return i;
		}
		i++;
	
	}
	return i;
}