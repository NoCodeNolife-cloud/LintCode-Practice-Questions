#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param nums: a list of integer
	 * @param k: an integer
	 * @return: return an integer, denote the number of continuous subarrays whose sum equals to k
	 */
	int subarraySumEqualsK(vector<int>& nums, int k) {
		unordered_map<int, int>mp;
		int result = 0;
		int sum = 0;
		mp[0] = 1;
		for (int i = 0; i < nums.size(); ++i) {
			sum += nums[i];
			result += mp[sum - k];
			++mp[sum];
		}
		return result;
	}
};
int main()
{
	vector<int>nums = {
		2,1,-1,1,2
	};
	Solution solution;
	cout << solution.subarraySumEqualsK(nums, 3);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}