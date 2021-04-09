#include <iostream>
using namespace std;
class ListNode {
public:
	int val;
	ListNode* next;
	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}
};
class Solution {
public:
	/**
	 * @param head: head is the head of the linked list
	 * @return: head of linked list
	 */
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode* res = head;
		if (head == nullptr) {
			return head;
		}
		for (ListNode* reshead = nullptr; head->next != NULL;) {
			reshead = head->next;
			if (head->val == reshead->val) {
				head->next = reshead->next;
			}
			else {
				head = head->next;
			}
		}
		return res;
	}
};
int main()
{
	system("pause");
	return 0;
}