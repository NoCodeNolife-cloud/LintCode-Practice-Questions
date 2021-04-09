#include <algorithm>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
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
	 * @param head: the given linked list
	 * @return: the array that store the values in reverse order
	 */
	vector<int> reverseStore(ListNode* head) {
		vector<int>ans;
		helper(head, ans);
		return ans;
	}
	void helper(ListNode* head, vector<int>& ans) {
		if (head == NULL) {
			return;
		}
		else {
			helper(head->next, ans);
		}
		ans.push_back(head->val);
	}
};
int main()
{
	Solution solution;
	ListNode node(1);
	ListNode node2(2);
	ListNode node3(3);
	node.next = &node2;
	node2.next = &node3;
	ListNode* head = &node;
	vector<int>res = solution.reverseStore(head);
	vector<int>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << setw(4) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}