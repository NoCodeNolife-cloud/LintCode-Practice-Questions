#include <algorithm>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param nums1: an array
	 * @param nums2: an array
	 * @return:  find all the next greater numbers for nums1's elements in the corresponding places of nums2
	 */
	vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
		vector<int>res;
		for (int i = 0; i < nums1.size(); i++) {
			bool findlarger = false;
			int tempindex;
			for (int j = 0; j < nums2.size(); j++) {
				if (nums2[j] == nums1[i]) {
					tempindex = j;
				}
			}
			for (int j = tempindex; j < nums2.size(); j++) {
				if (nums2[j] > nums1[i]) {
					res.push_back(nums2[j]);
					findlarger = true;
					break;
				}
			}
			if (!findlarger) {
				res.push_back(-1);
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int> nums1 = {
		4,1,2
	};
	vector<int> nums2 = {
		1,3,4,2
	};
	vector<int>res = solution.nextGreaterElement(nums1, nums2);
	vector<int>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << setw(4) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}