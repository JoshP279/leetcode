#include "Solution.h"
#include <set>
#include <iostream>

int Solution::removeDuplicates(std::vector<int>& nums) {
	
	if (nums.empty()) return 0;

	int i = 1;

	for (int j = 1; j < nums.size(); j++) {
		if (nums[j] != nums[i-1]) {
			nums[i] = nums[j];
			i++;
		}
	}
	return i;
}