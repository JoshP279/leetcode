#include "Solution.h"

int main() {
    ListNode list1(1);
    list1.next = new ListNode(2);
    list1.next->next = new ListNode(4);

    ListNode list2(1);
    list2.next = new ListNode(3);
    list2.next->next = new ListNode(4);

    Solution sol;

    sol.displayList(&list1);

    sol.displayList(&list2);
    ListNode* merged = sol.mergeTwoLists(&list1, &list2);
    
    sol.displayList(merged);
    return 0;
}