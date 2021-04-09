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
	 * @return: the product list of l1 and l2
	 */
	long long multiplyLists(ListNode* l1, ListNode* l2) {
		long long number_1 = 0;
		for (; 1; l1 = l1->next) {
			number_1 = number_1 * 10 + l1->val;
			if (l1->next == NULL) {
				break;
			}
		}
		long long number_2 = 0;
		for (; 1; l2 = l2->next) {
			number_2 = number_2 * 10 + l2->val;
			if (l2->next == NULL) {
				break;
			}
		}
		return number_1 * number_2;
	}
};
int main()
{
	Solution solution;
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}