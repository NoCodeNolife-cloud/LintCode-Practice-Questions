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
	 * @return: the shortest subarray's length
	 */
	int findUnsortedSubarray(vector<int>& nums) {
		vector<int>temp(nums);
		sort(temp.begin(), temp.end(), less<int>());
		if (temp == nums) {
			return 0;
		}
		int i, j;
		for (i = 0; i < nums.size(); i++) {
			if (nums[i] != temp[i]) {
				break;
			}
		}
		for (j = nums.size() - 1; j >= 0; j--) {
			if (nums[j] != temp[j]) {
				break;
			}
		}
		return j - i + 1;
	}
};
int main()
{
	vector<int>nums = { 2,6,4,8,10,9,15 };
	Solution solution;
	cout << solution.findUnsortedSubarray(nums);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}