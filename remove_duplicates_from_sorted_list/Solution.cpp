#include "Solution.h"

ListNode* Solution::deleteDuplicates(ListNode* head) {

	if (!head) {
		return nullptr;
	}

	if (!head->next) {
		return head;
	}

	ListNode* remainder = deleteDuplicates(head->next);

	if (!remainder) {
		return head;
	}

	if (head->val == remainder->val) {
		//Duplicate spotted
		head->next = remainder->next;
	}
	else {
		head->next = remainder;
	}

	return head;
}