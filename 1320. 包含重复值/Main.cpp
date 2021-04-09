#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param nums: the given array
	 * @return: if any value appears at least twice in the array
	 */
	bool containsDuplicate(vector<int>& nums) {
		map<int, bool>hash;
		hash[nums[0]] = true;
		for (int i = 1; i < nums.size(); i++) {
			if (hash.find(nums[i]) != hash.end()) {
				return true;
			}
			else {
				hash[nums[i]] = true;
			}
		}
		return false;
	}
};
int main()
{
	Solution solution;
	vector<int>nums = { 1,1 };
	cout << boolalpha << solution.containsDuplicate(nums);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}