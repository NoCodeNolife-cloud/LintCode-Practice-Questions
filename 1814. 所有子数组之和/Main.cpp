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
	 * @param nums: a Integer list
	 * @return: return the sum of subarrays
	 */
	int SubArraySum(vector<int>& nums) {
		int res = 0;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i; j < nums.size(); j++) {
				res += sum(nums, i, j);
			}
		}
		return res;
	}
	int sum(vector<int>& nums, int a, int b) {
		int res = 0;
		for (int i = a; i <= b; i++) {
			res += nums[i];
		}
		return res;
	}
};
int main()
{
	vector<int>nums = {
		1,2,3
	};
	Solution solution;
	cout << solution.SubArraySum(nums);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}