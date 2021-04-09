#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param nums: a integer array
	 * @return: the index of the largest element
	 */
	int dominantIndex(vector<int>& nums) {
		if (nums.size() == 1) {
			return 0;
		}
		int maxindex = 0;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i] > nums[maxindex]) {
				maxindex = i;
			}
		}
		for (int i = 0; i < nums.size(); i++) {
			if (nums[maxindex] < 2 * nums[i] and i != maxindex) {
				return -1;
			}
		}
		return maxindex;
	}
};
int main()
{
	vector<int>nums = {
		1, 2, 3, 4
	};
	Solution solution;
	cout << solution.dominantIndex(nums) << endl;
	system("pause");
	return 0;
}