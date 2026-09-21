#include "Solution.h"
#include <vector>

int Solution::removeElement(std::vector<int>& nums, int val) {
	int k = 0;

	for (const int num : nums) {
		if (num != val) {
			nums[k] = num;
			k++;
		}
	}
	return k;
}