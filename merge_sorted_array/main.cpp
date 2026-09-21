#include "Solution.h"
#include <vector>
int main() {
	
	std::vector<int> vec1 = { 1,2,3,0,0,0 };

	std::vector<int> vec2 = { 2, 5, 6 };

	Solution().merge(vec1, 3, vec2, 3);

	return 0;
}