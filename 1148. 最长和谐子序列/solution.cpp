#include "head.h"

int Solution::findLHS(vector<int>& nums) {
	map<int, int>count;
	int ans = 0;
	for (auto num : nums) {
		count[num]++;
	}
	for (auto num : nums) {
		if (count[num] and count[num - 1]) {
			ans = max(ans, count[num] + count[num - 1]);
		}
	}
	return ans;
}