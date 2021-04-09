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
	 * @param nums: a list of integer
	 * @param target: an integer
	 * @return: nothing
	 */
	void MoveTarget(vector<int>& nums, int target) {
		vector<int>res;
		vector<int>count;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] == target) {
				count.push_back(target);
			}
			else {
				res.push_back(nums[i]);
			}
		}
		for (int i = 0; i < res.size(); i++) {
			count.push_back(res[i]);
		}
		nums.clear();
		nums = count;
	}
};
int main()
{
	Solution solution;
	vector<int>nums = {
		5,1,6,1
	};
	solution.MoveTarget(nums, 1);
	for (int i = 0; i < nums.size(); i++) {
		cout << setw(3) << left << nums[i];
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}