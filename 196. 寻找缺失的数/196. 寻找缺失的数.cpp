#include <algorithm>
#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Solution {
public:
	/**
	 * @param nums: An array of integers
	 * @return: An integer
	 */
	int findMissing(vector<int>& nums) {
		if (nums.size() == 1) {
			return 1;
		}
		sort(nums.begin(), nums.end());
		for (int i = 0; i <= nums.size(); i++) {
			if (nums[i] != i) {
				return i;
			}
		}
		return 0;
	}
};
int main()
{
	vector<int>nums = {
		1,2,3
	};
	Solution solution;
	cout << solution.findMissing(nums) << endl;
	system("pause");
	return 0;
}