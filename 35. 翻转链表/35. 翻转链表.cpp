/*
* flip the pointer to the node
*/
#include <iostream>
using namespace std;
/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */
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
	 * @param head: n
	 * @return: The new head of reversed linked list.
	 */
	ListNode* reverse(ListNode* head) {
		ListNode* result = nullptr;//result initialization
		while (head != nullptr) {
			ListNode* temp = head->next;
			head->next = result;
			result = head;
			head = temp;
		}
		return result;
	}
};
int main()
{
	system("pause");
	return 0;
}