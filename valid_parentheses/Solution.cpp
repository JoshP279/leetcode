#include "Solution.h"
#include <iostream>


bool Solution::isMatchingPair(char open, char close) {
	return (open == '(' && close == ')') ||
		(open == '{' && close == '}') ||
		(open == '[' && close == ']');
}

bool Solution::isValid(std::string s) {
	std::string stack;
	for (char c : s) {
		
		switch (c) {
		case '{':
		case '(':
		case '[':
			stack.push_back(c); //Add to stack
			break;

		case '}':
		case ')':
		case ']':
			if (stack.empty() || !isMatchingPair(stack.back(), c)) {
				return false;
			}
			stack.pop_back();
			break;
		}

	}
	return stack.empty();
}


int main() {
	Solution solution;

	bool valid = solution.isValid("([)]");

	std::cout << (valid ? "true" : "false") << std::endl;
	return 0;
}