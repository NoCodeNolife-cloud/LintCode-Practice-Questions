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
bool cmp(int a, int b) {
	if (a > b) {
		return true;
	}
	else {
		return false;
	}
}
class Solution {
public:
	/**
	 * @param nums: the array
	 * @return: the third maximum number in this array
	 */
	int thirdMax(vector<int>& nums) {
		sort(nums.begin(), nums.end(), cmp);
		auto iter = unique(nums.begin(), nums.end());
		nums.erase(iter, nums.end());
		if (nums.size() >= 3) {
			return nums[2];
		}
		else {
			return nums[0];
		}
	}
};
int main()
{
	Solution solution;
	vector<int>nums = { 3,2,1 };
	cout << solution.thirdMax(nums);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}