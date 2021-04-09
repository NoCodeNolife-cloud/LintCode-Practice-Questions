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
	 * @param k: an integer
	 * @return: the maximum average value
	 */
	double findMaxAverage(vector<int>& nums, int k) {
		double res = 0;
		for (int i = 0; i < nums.size() - k + 1; i++) {
			double temp = 0;
			for (int j = i; j < i + k; j++) {
				temp += nums[j];
			}
			temp /= k;
			res = max(temp, res);
		}
		return res;
	}
};
int main()
{
	vector<int>nums = {
		1,12,-5,-6,50,3
	};
	Solution solution;
	cout << solution.findMaxAverage(nums, 4);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}