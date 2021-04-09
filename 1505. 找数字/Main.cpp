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
	 * @param nums: a integer array
	 * @param k: a integer
	 * @return: return true or false denoting if the element is present in the array or not
	 */
	bool findnNumber(vector<int>& nums, int k) {
		sort(nums.begin(), nums.end(), less<int>());
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] < k) {
				continue;
			}
			else if (nums[i] == k) {
				return true;
			}
			else {
				return false;
			}
		}
	}
};
int main()
{
	Solution solution;
	vector<int>nums = { 1,2,3,4,5 };
	cout << boolalpha << solution.findnNumber(nums, 1);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}