#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
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
	 * @param k: the given number
	 * @return:  whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k
	 */
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		map<int, int>hash;
		hash[nums[0]] = 0;
		for (int i = 1; i < nums.size(); i++) {
			if (hash.find(nums[i]) == hash.end()) {
				hash[nums[i]] = i;
			}
			else {
				if (i - hash[nums[i]] > k) {
					hash[nums[i]] = i;
				}
				else {
					return true;
				}
			}
		}
		return false;
	}
};
int main()
{
	vector<int>nums = {
		1,2,1
	};
	Solution solution;
	cout << boolalpha << solution.containsNearbyDuplicate(nums, 0);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}