#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Solution {
public:
	/*
	 * @param nums: an array of integers
	 * @return: nothing
	 */
	void partitionArray(vector<int>& nums) {
		if (nums.size() == 0) {
			return;
		}
		vector<int>single;
		vector<int>doub;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] % 2 == 0) {
				doub.push_back(nums[i]);
			}
			else {
				single.push_back(nums[i]);
			}
		}
		nums.clear();
		for (int i = 0; i < single.size(); i++) {
			nums.push_back(single[i]);
		}
		for (int i = 0; i < doub.size(); i++) {
			nums.push_back(doub[i]);
		}
		return;
	}
};
int main()
{
	vector<int> nums = {
		1,4,2,3,5,6
	};
	Solution solution;
	solution.partitionArray(nums);
	for (int x : nums) {
		cout << setw(3) << left << x;
	}
	system("pause");
	return 0;
}