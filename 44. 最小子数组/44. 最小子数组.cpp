#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	/*
	 * @param nums: a list of integers
	 * @return: A integer indicate the sum of minimum subarray
	 */

	 /**
	  * my answer
	 */

	 //int minSubArray(vector<int>& nums) {
	 //	int size = nums.size();
	 //	int minsum = nums[0];
	 //	for (int length = 1; length <= size; length++) {
	 //		int tempsum = INT_MAX;
	 //		for (int i = 0; i <= size - length; i++) {
	 //			tempsum = vectorSum(nums, i, i + length - 1);
	 //			if (tempsum < minsum) {
	 //				minsum = tempsum;
	 //			}
	 //		}
	 //	}
	 //	return minsum;
	 //}
	 //int vectorSum(vector<int>nums, int a, int b) {//get the sum of the integer between index of a and index of b
	 //	int sum = 0;
	 //	for (int i = a; i <= b; i++) {
	 //		sum += nums[i];
	 //	}
	 //	return sum;
	 //}

	 /*
	 * the answer
	 */
	int minSubArray(vector<int>& nums) {
		int s = nums[0], minsum = s;//initialize
		for (int i = 1; i < nums.size(); i++) {
			s = min(0, s) + nums[i];
			minsum = min(minsum, s);
		}
		return minsum;
	}
};
int main()
{
	vector<int>vec = { -2,0,0,1,-1,-1 };
	Solution solution;
	cout << solution.minSubArray(vec) << endl;
	system("pause");
	return 0;
}