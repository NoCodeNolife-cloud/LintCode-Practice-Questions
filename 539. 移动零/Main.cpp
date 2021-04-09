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
	 * @param nums: an integer array
	 * @return: nothing
	 */
	void moveZeroes(vector<int>& nums) {
		vector<int>temp;
		int numberzero = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 0) {
				numberzero++;
			}
			else {
				temp.push_back(nums[i]);
			}
		}
		nums.clear();
		nums = temp;
		for (int i = 0; i < numberzero; i++) {
			nums.push_back(0);
		}
		return;
	}
};
int main()
{
	vector<int>nums = {
		0,1,0,3,12
	};
	Solution solution;
	solution.moveZeroes(nums);
	for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++) {
		cout << setw(5) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}