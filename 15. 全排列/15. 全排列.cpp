#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/*
	 * @param nums: A list of integers.
	 * @return: A list of permutations.
	 */
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>>results;
		if (nums.size() == 0) {//nums为空
			results.push_back(vector<int>());
			return results;
		}
		vector<bool>used(nums.size(), 0);
		vector<int>current;
		dfs(nums, used, current, results);
		return results;
	}
	void dfs(vector<int>nums, vector<bool>& used, vector<int>& current, vector<vector<int>>& results) {
		if (current.size() == nums.size()) {
			results.push_back(current);
			return;
		}
		for (int i = 0; i < nums.size(); i++) {
			if (used[i]) {
				continue;
			}
			current.push_back(nums[i]);
			used[i] = true;
			dfs(nums, used, current, results);//递归
			used[i] = false;
			current.pop_back();
		}
		return;
	}
};

int main()
{
	vector<int>vec = { 1,2,3 ,4 };
	Solution solution;
	vector<vector<int>>res = solution.permute(vec);
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