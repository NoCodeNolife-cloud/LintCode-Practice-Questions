#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
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
	 * @param l1: the first list
	 * @param l2: the second list
	 * @return: the sum list of l1 and l2
	 */
	ListNode* addLists(ListNode* l1, ListNode* l2) {
		ListNode* result = nullptr, ** prev = &result;
		for (int carry = 0; l1 || l2 || carry;) {
			if (l1) {
				carry += l1->val;
				l1 = l1->next;
			}
			if (l2) {
				carry += l2->val;
				l2 = l2->next;
			}
			*prev = new ListNode(carry % 10);
			prev = &((*prev)->next);
			carry /= 10;
		}
		return result;
	}
};
int main()
{
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}