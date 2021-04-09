#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param nums: List[List[int]]
	 * @param r: an integer
	 * @param c: an integer
	 * @return: return List[List[int]]
	 */
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		int m = nums.size();
		int n = nums[0].size();
		if (r * c != m * n) {
			return nums;
		}
		else {
			vector<vector<int>> res(r, vector<int>(c, 0));
			vector<int>count;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					count.push_back(nums[i][j]);
				}
			}
			int index = 0;
			for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					res[i][j] = count[index];
					index++;
				}
			}
			return res;
		}
	}
};
int main()
{
	Solution solution;
	vector<vector<int>>nums = {
		{1,2},{3,4}
	};
	vector<vector<int>>res = solution.matrixReshape(nums, 1, 4);
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << setw(3) << left << res[i][j];
		}
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}