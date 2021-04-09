#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param nums: an array
	 * @param k: an integer
	 * @return: the number of subarrays where the product of all the elements in the subarray is less than k
	 */
	int numSubarrayProductLessThanK(vector<int>& nums, int k) {
		int res = 0;
		for (int i = 0; i < nums.size(); i++) {
			int sum = 1;
			for (int j = i; j < nums.size(); j++) {
				sum *= nums[j];
				if (sum < k) {
					res++;
				}
				else {
					break;
				}
			}
		}
		return res;
	}
};
int main()
{
	vector<int>nums = { 7,6,8,4,9,3,2,10,7,9,9,6,3 };
	Solution solution;
	cout << solution.numSubarrayProductLessThanK(nums, 236);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}