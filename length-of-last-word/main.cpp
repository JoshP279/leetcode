#include "Solution.h"
#include <iostream>
int main() {


	std::string s = "Hello World";

	int length = Solution().lengthOfLastWord(s);
	
	std::cout << length << std::endl;
	return 0;
}