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
	 * @return: the Next Greater Number for every element
	 */
	vector<int> nextGreaterElements(vector<int>& nums) {
		vector<int>res;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; 1; j++) {
				if (j == nums.size()) {
					j = 0;
				}
				if (j == i) {
					res.push_back(-1);
					break;
				}
				if (nums[j] > nums[i]) {
					res.push_back(nums[j]);
					break;
				}
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>nums = { 1,2,1 };
	vector<int>res = solution.nextGreaterElements(nums);
	for (int x : res) {
		cout << setw(3) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}