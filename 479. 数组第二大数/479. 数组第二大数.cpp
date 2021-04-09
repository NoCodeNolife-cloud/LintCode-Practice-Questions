#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	/**
	 * @param nums: An integer array
	 * @return: The second max number in the array.
	 */
	int secondMax(vector<int>& nums) {
		int firstmax = nums[0], secondmax = nums[1];
		if (firstmax < secondmax) {
			swap(firstmax, secondmax);
		}
		for (int i = 2; i < nums.size(); i++) {
			if (nums[i] > firstmax) {
				secondmax = firstmax;
				firstmax = nums[i];
			}
			else if (nums[i] > secondmax) {
				secondmax = nums[i];
			}
		}
		return secondmax;
	}
}; int main()
{
	vector<int>nums = {
		1,1,2,2
	};
	Solution solution;
	cout << solution.secondMax(nums) << endl;
	system("pause");
	return 0;
}