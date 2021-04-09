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
	 * @param nums: A list of integers
	 * @return: A list of integers
	 */
	vector<int> nextPermutation(vector<int>& nums) {
		if (nums.size() == 1) {
			return nums;
		}
		int i = nums.size() - 2;
		while (i >= 0 and nums[i] >= nums[i + 1]) {
			i--;
		}
		int j = nums.size() - 1;
		if (i >= 0) {
			while (nums[j] <= nums[i]) {
				j--;
			}
			swap(nums[i], nums[j]);
		}
		reverse(nums.begin() + i + 1, nums.end());
		return nums;
	}
};
int main()
{
	std::cout << "Hello World!\n";
}