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
	 * @param nums: an array
	 * @param k: an integer
	 * @return: rotate the array to the right by k steps
	 */
	vector<int> rotate(vector<int>& nums, int k) {
		int size = nums.size();
		k = k % size;
		vector<int>res;
		for (int i = size - k; i < size; i++) {
			res.push_back(nums[i]);
		}
		for (int i = 0; i < size - k; i++) {
			res.push_back(nums[i]);
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>nums = {
		1,2,3,4,5,6,7
	};
	vector<int>res = solution.rotate(nums, 3);
	vector<int>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << setw(3) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}