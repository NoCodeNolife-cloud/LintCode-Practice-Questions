#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
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
	 * @param nums: A list of integers
	 * @return: A integer indicate the sum of max subarray
	 */
	int maxSubArray(vector<int>& nums) {
		int sum = 0, maxAns = INT_MIN;
		for (int i = 0; i < nums.size(); ++i) {
			sum += nums[i];
			maxAns = max(maxAns, sum);
			sum = max(sum, 0);
		}
		return maxAns;
	}
};
int main()
{
	vector<int>nums = {
		-2,2,-3,4,-1,2,1,-5,3
	};
	Solution solution;
	cout << solution.maxSubArray(nums);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}