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
	 * @param nums: a binary array
	 * @return:  the maximum number of consecutive 1s
	 */
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int res = 0;
		int count = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 1) {
				count++;
			}
			else if (res < count) {
				res = count;
				count = 0;
			}
			else {
				count = 0;
			}
			if (i == nums.size() - 1 and res < count) {
				res = count;
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>nums = {
		1,1,0,1,1,1
	};
	cout << solution.findMaxConsecutiveOnes(nums);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}