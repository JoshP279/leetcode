#include <iostream>
#include "Solution.h"
using namespace std;

int Solution::romanToInt(std::string s) {
	int result = 0;
	for (size_t i = 0; i < s.length(); i++) {
		if (romanMap[s[i]] < romanMap[s[i + 1]]) {
			result -= romanMap[s[i]];
		}
		else {
			result += romanMap[s[i]];
		}
	}
	std::cout << result << std::endl;
	return result;
}