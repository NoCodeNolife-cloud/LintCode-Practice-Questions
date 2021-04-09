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
	 * @param nums: an array
	 * @return: if it could become non-decreasing by modifying at most 1 element
	 */
	bool checkPossibility(vector<int>& nums) {
		if (nums.size() == 1) {
			return true;
		}
		bool change = false;
		if (nums[1] < nums[0]) {
			change = true;
			nums[0] = INT_MIN;
		}
		for (int i = 2; i < nums.size(); i++) {
			if (nums[i] < nums[i - 1] and change == false) {
				change = true;
				nums[i] = nums[i - 1];
			}
			else if (nums[i] < nums[i - 1] and change == true) {
				return false;
			}
		}
		return true;
	}
};
int main()
{
	Solution solution;
	vector<int>nums = { 4,2,1 };
	cout << boolalpha << solution.checkPossibility(nums);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}