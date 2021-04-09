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
	 * @param nums: the array to be scored.
	 * @param k: the requirement of subarray length.
	 * @param u: if the sum is less than u, get 1 score.
	 * @param l: if the sum is greater than l, lose 1 score.
	 * @return: return the sum of scores for every subarray whose length is k.
	 */
	int arrayScore(vector<int>& nums, int k, long long u, long long l) {
		long long sumofsubarray = 0;
		int score = 0;
		int n = nums.size();
		for (int i = 0; i < k; i++) {
			sumofsubarray += nums[i];
		}
		if (sumofsubarray < u) {
			score++;
		}
		if (sumofsubarray > l) {
			score--;
		}
		for (int i = k; i < n; i++) {
			sumofsubarray += nums[i];
			sumofsubarray -= nums[i - k];
			if (sumofsubarray < u) {
				score++;
			}
			if (sumofsubarray > l) {
				score--;
			}
		}
		return score;
	}
};
int main()
{
	vector<int>nums = {
		3,2,1,5,4
	};
	Solution solution;
	cout << solution.arrayScore(nums, 3, 12, 12);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}