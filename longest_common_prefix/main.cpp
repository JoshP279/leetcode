#include "Solution.h";

int main() {
	Solution solution;
	std::vector<std::string> strs = { "flower", "flow", "flight" };
	std::string longestPrefix = solution.longestCommonPrefix(strs);
	std::cout << longestPrefix << std::endl;
	return 0;
}