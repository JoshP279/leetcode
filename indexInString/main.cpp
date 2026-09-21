#include "Solution.h"
#include <iostream>

int main() {

	std::string needle = "sad";

	std::string haystack = "sadbutsad";


	int k = Solution().strStr(haystack, needle);

	std::cout << k;
	return 0;
}