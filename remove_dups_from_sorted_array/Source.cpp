#include "Solution.h"
#include <vector>
#include <iostream>
int main() {
	
	Solution solution;
	std::vector v = { 0,0,1,1,1,2,2,3,3,4 };
	auto k = solution.removeDuplicates(v);
	std::cout << k;
	return 0;
}