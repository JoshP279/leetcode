#include "Solution.h"
#include <iostream>

int main() {

	ListNode* head = new ListNode(1, new ListNode(1, new ListNode(2)));

	ListNode* sortedHead = Solution().deleteDuplicates(head);

	while (sortedHead) {
		std::cout << sortedHead->val << std::endl;
		sortedHead = sortedHead->next;
	}
	return 0;
}