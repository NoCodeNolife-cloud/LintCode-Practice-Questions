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
	 * @param nums: an array
	 * @return: the sum of min(ai, bi) for all i from 1 to n
	 */
	int arrayPairSum(vector<int>& nums) {
		sort(nums.begin(), nums.end(), less<int>());
		size_t size = nums.size();
		int sum = 0;
		for (int i = 0; i < size; i += 2) {
			sum += min(nums[i], nums[i + 1]);
		}
		return sum;
	}
};
int main()
{
	vector<int>nums = {
		1,4,3,2
	};
	Solution solution;
	cout << solution.arrayPairSum(nums);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}