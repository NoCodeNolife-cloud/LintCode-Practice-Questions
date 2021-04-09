#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	/**
	 * @param nums: A set of numbers
	 * @return: A list of lists
	 */
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>>results;
		vector<int> subset;
		sort(nums.begin(), nums.end());
		helper(results, subset, nums, 0);
		return results;
	}
private:
	void helper(vector<vector<int>>& results, vector<int>& subset, vector<int>& nums, int start) {
		results.push_back(subset);
		for (int i = start; i < nums.size(); i++) {
			subset.push_back(nums[i]);
			helper(results, subset, nums, i + 1);
			subset.pop_back();
		}
	}
};
int main()
{
	Solution solution;
	vector<int>obj = { 1,2,3 };
	vector<vector<int>>result = solution.subsets(obj);
	for (vector<int> x : result) {
		cout << "[";
		for (int i = 0; i < x.size(); i++) {
			cout << x[i];
			if (i != x.size() - 1) {
				cout << ",";
			}
		}
		cout << "]\n";
	}
}