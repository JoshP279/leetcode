#include "Solution.h"
#include <algorithm>
#include <iostream>
#include <string>

std::string Solution::addBinary(std::string a, std::string b) {
	int carry = 0;

	std::string answer;

	int i = a.length() - 1;

	int j = b.length() - 1;


	while (i >= 0 || j >= 0 || carry) {

		
		if (i >= 0) {
			carry+= a[i--] - '0';
		}

		if (j >= 0) {
			carry += b[j--] - '0';
		}


		answer += (carry % 2) + '0';

		carry /= 2;

	}

	std::reverse(answer.begin(), answer.end());

	std::cout << answer << std::endl;
	return answer;

}