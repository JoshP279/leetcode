#include "Solution.h"
#include <iostream>


int Solution::strStr(std::string haystack, std::string needle) {

	int n = haystack.length();
	int m = needle.length();

	for (int i = 0; i <= n - m; i++) {
		for (int j = 0; j < m; j++) {
			if (haystack[i + j] != needle[j]) {
				break;
			}

			if (j == m - 1)  {
				return i;
			}
		}
	}

	return -1;
}