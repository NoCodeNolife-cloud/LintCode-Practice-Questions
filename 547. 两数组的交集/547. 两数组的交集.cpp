#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
class Solution {
public:
	/**
	 * @param nums1: an integer array
	 * @param nums2: an integer array
	 * @return: an integer array
	 */
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int>count;
		sort(nums1.begin(), nums1.end(), less<int>());
		sort(nums2.begin(), nums2.end(), less<int>());
		vector<int>::iterator iter1 = nums1.begin(), iter2 = nums2.begin();
		while (iter1 != nums1.end() and iter2 != nums2.end()) {
			if (*iter1 == *iter2) {
				count.push_back(*iter1);
				*iter1++;
				*iter2++;
			}
			else if (*iter1 > *iter2) {
				*iter2++;
			}
			else {
				*iter1++;
			}
		}
		vector<int>::iterator last = unique(count.begin(), count.end());
		count.erase(last, count.end());
		return count;
	}
};
int main()
{
	vector<int>nums1 = {
		1, 2, 2, 1
	};
	vector<int>nums2 = {
		2, 2,1
	};
	Solution solution;
	vector<int>res = solution.intersection(nums1, nums2);
	for (int x : res) {
		cout << setw(2) << left << x;
	}
	cout << endl;
	system("pause");
	return 0;
}