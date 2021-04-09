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
	int longestIncreasingSubsequence(vector<int>& nums) {
		if (nums.size() == 0) {
			return 0;
		}
		int res = 1;
		vector<int> LIS(nums.size(), 1);
		for (int i = 1; i < nums.size(); ++i) {
			for (int j = 0; j < i; ++j) {
				if (nums[i] > nums[j]) {
					LIS[i] = max(LIS[i], LIS[j] + 1);
				}
			}
			res = max(res, LIS[i]);
		}
		return res;
	}
};
int main()
{
	vector<int>nums = {};
	Solution solution;
	cout << solution.longestIncreasingSubsequence(nums);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}