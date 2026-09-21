#include <iostream>
#include "Solution.h"


int Solution::lengthOfLastWord(std::string s) {
	int length = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] != ' ') length++;
		else if (length != 0) break;
	}
	
	return length;
}