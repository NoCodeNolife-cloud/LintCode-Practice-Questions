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
bool cmp(int a, int b) {
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}
class Solution {
public:
	/**
	 * @param nums: A list of integer which is 0, 1 or 2
	 * @return: nothing
	 */
	void sortColors(vector<int>& nums) {
		sort(nums.begin(), nums.end(), cmp);
	}
};
int main()
{
	vector<int>nums = { 2,0,0,1,2,0,2 };
	Solution solution;
	solution.sortColors(nums);
	for (int x : nums) {
		cout << setw(4) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}