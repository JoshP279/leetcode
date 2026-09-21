#include "Solution.h"
#include <iostream>
#include <string>

ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2) {
	if (!list1) {
		return list2;
	}

	if (!list2) {
		return list1;
	}

	if (list1->val <= list2->val) {
		list1->next = mergeTwoLists(list1->next, list2);
		return list1;
	}

	else {
		list2->next = mergeTwoLists(list1, list2->next);
		return list2;
	}
}

void Solution::displayList(ListNode* list) {
	while (list) {
		std::cout << list->val << "\t";
		list = list->next;
	}

	std::cout << std::endl;
}