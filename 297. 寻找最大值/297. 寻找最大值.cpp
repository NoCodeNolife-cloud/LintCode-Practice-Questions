#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param nums: the list of numbers
	 * @return: return the maximum number.
	 */
	int maxNum(vector<int>& nums) {
		int maxindex = 0;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[maxindex] < nums[i]) {
				maxindex = i;
			}
		}
		return nums[maxindex];
	}
};
int main()
{
	Solution solution;
	vector<int>vec = { 1, 2, 6, 4, 5 };
	cout << solution.maxNum(vec) << endl;
	system("pause");
	return 0;
}