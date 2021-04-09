#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param nums1: an integer array
	 * @param nums2: an integer array
	 * @return: an integer array
	 */
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		vector<int>intersect;
		vector<int>::iterator it1 = nums1.begin(), it2 = nums2.begin();
		while ((it1 != nums1.end()) and (it2 != nums2.end())) {
			if (*it1 < *it2) {
				it1++;
			}
			else if (*it1 > *it2) {
				it2++;
			}
			else {
				intersect.push_back(*it1);
				it1++;
				it2++;
			}
		}
		return intersect;
	}
};
int main()
{
	vector<int>nums1 = {
		1, 2, 2, 1
	};
	vector<int>nums2 = {
		2, 2
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