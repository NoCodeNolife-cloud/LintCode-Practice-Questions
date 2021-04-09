#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	/**
	 * @param nums: The integer array.
	 * @param target: Target to find.
	 * @return: The first position of target. Position starts from 0.
	 */
	int binarySearch(vector<int>& nums, int target) {
		int tempa = 0, tempb = nums.size();
		while (tempb > tempa) {
			int medium = (tempa + tempb) / 2;
			if (nums[medium] >= target) {
				tempb = medium - 1;
			}
			else if (nums[medium] == target) {
				while (nums[medium] == nums[medium - 1]) {
					medium--;
				}
				return medium;
			}
			else {
				tempa = medium + 1;
			}
		}
		return -1;
	}
};

int main()
{
	vector<int>vec = { 1,2,3,3,4,5,10 };
	Solution solution;
	cout << solution.binarySearch(vec, 11);
	return 0;
}