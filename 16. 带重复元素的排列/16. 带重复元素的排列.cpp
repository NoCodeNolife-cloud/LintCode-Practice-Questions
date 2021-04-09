#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
private:
	void helper(vector<vector<int>>& results, vector<int>& permutation, vector<int>& nums, bool used[]) {
		if (nums.size() == permutation.size()) {
			results.push_back(permutation);
			return;
		}
		for (int i = 0; i < nums.size(); i++) {
			if (used[i]) {
				continue;
			}
			if (i > 0 && used[i - 1] == false && nums[i] == nums[i - 1]) {
				continue;
			}
			used[i] = true;
			permutation.push_back(nums[i]);
			helper(results, permutation, nums, used);
			permutation.pop_back();
			used[i] = false;
		}
	}
public:
	/*
	 * @param nums: A list of integers.
	 * @return: A list of permutations.
	 */
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		vector<vector<int>>results;
		vector<int>permutation;
		bool* used = new bool[nums.size()];
		for (int i = 0; i < nums.size(); i++) {
			used[i] = false;
		}
		sort(nums.begin(), nums.end());
		helper(results, permutation, nums, used);
		return results;
	}
};

int main()
{
	vector<int>vec = { 1,2,2 };
	Solution solution;
	vector<vector<int>>res = solution.permuteUnique(vec);
	for (vector<int> x : res) {
		cout << "[";
		for (int y = 0; y < vec.size(); y++) {
			cout << x[y];
			if (y != vec.size() - 1) {
				cout << ",";
			}
		}
		cout << "]\n";
	}
	return 0;
}