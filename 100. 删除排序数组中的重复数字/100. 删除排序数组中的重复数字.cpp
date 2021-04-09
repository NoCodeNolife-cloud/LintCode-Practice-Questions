#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	/*
	 * @param nums: An ineger array
	 * @return: An integer
	 */
	int removeDuplicates(vector<int>& nums) {
		vector<int>::iterator iter = unique(nums.begin(), nums.end());
		nums.erase(iter, nums.end());
		return nums.size();
	}
};
int main()
{
	vector<int>nums = {
		1,1,2
	};
	Solution solution;
	cout << solution.removeDuplicates(nums) << endl;
	system("pause");
	return 0;
}