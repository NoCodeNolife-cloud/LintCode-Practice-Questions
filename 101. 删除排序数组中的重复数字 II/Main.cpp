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
	 * @param A: a list of integers
	 * @return : return an integer
	 */
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0) {
			return 0;
		}
		bool equal = false;
		for (int i = 1; i < nums.size();) {
			if (nums[i] == nums[i - 1] and equal == false) {
				equal = true;
				++i;
			}
			else if (nums[i] != nums[i - 1]) {
				equal = false;
				++i;
			}
			else {
				nums.erase(nums.begin() + i);
			}
		}
		return nums.size();
	}
};
int main()
{
	vector<int>nums = {
		1,1,1,2,2,3
	};
	Solution solution;
	cout << solution.removeDuplicates(nums);
	vector<int>::iterator iter;
	cout << endl;
	for (iter = nums.begin(); iter != nums.end(); ++iter) {
		cout << setw(3) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}