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
	 * @return: An integer denotes the middle number of the array
	 */
	int median(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		if (nums.size() % 2 == 0) {
			return nums[(nums.size() / 2) - 1];
		}
		else {
			return nums[nums.size() / 2];
		}
	}
};
int main()
{
	vector<int>nums = {
		4, 5, 1, 2, 3
	};
	Solution solution;
	cout << solution.median(nums);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}