#include "Solution.h"
#include <string>
#include <cstring>

std::string Solution::intToRoman(int num) {

	std::string result = "";

	for (const auto& [key, value] : romanMap) {

		while (num >= key) {
			num -= key;
			result += value;
		}
	}
	
	std::cout << result;
	return result;
}