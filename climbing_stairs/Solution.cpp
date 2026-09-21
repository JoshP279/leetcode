#include "Solution.h"
#include <vector>
int Solution::climbStairs(int n) {
	if (n == 0) {
		return 1;
	}

	std::vector<int> vec(n + 1, 0);

	vec[0] = 1;

	vec[1] = 1;


	for (int step = 2; step <= n; step++) {
		vec[step] = vec[step - 1] + vec[step - 2];
	}

	return vec[n];

}

