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
	 * @param nums: an array
	 * @return: the number occurs twice and the number that is missing
	 */
	vector<int> findErrorNums(vector<int>& nums) {
		map<int, int>hash;
		for (int i = 0; i < nums.size(); i++) {
			if (hash.find(nums[i]) == hash.end()) {
				hash[nums[i]] = 1;
			}
			else {
				hash[nums[i]]++;
			}
		}
		vector<int>res;
		int count = 0;
		for (map<int, int>::iterator iter = hash.begin(); iter != hash.end(); iter++) {
			count++;
		}
		if (count == 1) {
			if (hash.find(1) != hash.end()) {
				res.push_back(1);
				res.push_back(2);
				return res;
			}
			else {
				res.push_back(2);
				res.push_back(1);
				return res;
			}
		}
		int first, second;
		for (map<int, int>::iterator iter = hash.begin(); iter != hash.end(); iter++) {
			if (iter->second == 2) {
				first = iter->first;
				break;
			}
		}
		res.push_back(first);
		for (int i = 1; i <= nums.size(); i++) {
			if (hash.find(i) == hash.end()) {
				second = i;
				break;
			}
		}
		res.push_back(second);
		return res;
	}
};
int main()
{
	vector<int>nums = { 1,2,2,4 };
	Solution solution;
	vector<int>res = solution.findErrorNums(nums);
	for (vector<int>::iterator iter = res.begin(); iter != res.end(); iter++) {
		cout << setw(3) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}