#include <iostream>
using namespace std;
/**
 * Definition of singly-linked-list:
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
	 * @param head: the first node of linked list.
	 * @return: An integer
	 */
	int countNodes(ListNode* head) {
		int res = 0;
		while (head != NULL) {
			res++;
			head = head->next;
		}
		return res;
	}
};
int main()
{
	Solution solution;
	system("pause");
	return 0;
}