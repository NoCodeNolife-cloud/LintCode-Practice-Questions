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
	 * @param nums: An integer array sorted in ascending order
	 * @param target: An integer
	 * @return: An integer
	 */
	int findPosition(vector<int>& nums, int target) {
		if (nums.size() == 0) {
			return -1;
		}
		int tleft = 0, tright = nums.size() - 1;
		while (tleft <= tright) {
			int middleindex = (tleft + tright) / 2;
			int middle = nums[middleindex];
			if (middle < target) {
				tleft = middleindex + 1;
			}
			else if (middle > target) {
				tright = middleindex - 1;
			}
			else {
				return middleindex;
			}
		}
		return -1;
	}
};
int main()
{
	vector<int>nums = { 1,1,1,1,1,1,1,1,1 };
	Solution solution;
	cout << solution.findPosition(nums, 2);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}