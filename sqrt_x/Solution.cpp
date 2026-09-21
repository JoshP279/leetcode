#include "Solution.h"
#include <cmath>

int Solution::mySqrt(int x) {
	if (x == 0 || x == 1) {
		return x;
	}

	int start = 1;
	int end = x;
	int mid = 0;


	while (start <= end) {

		mid = start + (end - start) / 2;

		long long square = static_cast<long long>(mid) * mid;

		if (square > x) {
			end = mid - 1;
		}
		else if (square == x) {
			return std::floor(mid);
		}
		else {
			start = mid + 1;
		}
	}

	return static_cast<int>(std::round(end));
}