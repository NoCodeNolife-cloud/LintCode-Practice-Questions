﻿#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param grid: a boolean 2D matrix
	 * @return: an integer
	 */
	int numIslands(vector<vector<bool>>& grid) {
		if (grid.size() == 0) {
			return 0;
		}
		int n = grid.size(), m = grid[0].size();
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (grid[i][j]) {//if grid is true
					dfs(grid, i, j);
					ans++;
				}
			}
		}
		return ans;
	}
	void dfs(vector<vector<bool>>& grid, int i, int j) {//dfs algorithm
		int dir[4][2] = { 1,0,-1,0,0,1,0,-1 };
		int n = grid.size(), m = grid[0].size();
		for (int k = 0; k < 4; k++) {
			int next_i = i + dir[k][0], next_j = j + dir[k][1];
			if (next_i >= 0 && next_i < n && next_j >= 0 && next_j < m && grid[next_i][next_j]) {
				grid[next_i][next_j] = false;
				dfs(grid, next_i, next_j);
			}
		}
		return;
	}
};
int main()
{
	Solution solution;
	vector<vector<bool>>vec = {
		{1,1,0,0,0} ,
		{0,1,0,0,1},
		{0,0,0,1,1},
		{0,0,0,0,0},
		{0,0,0,0,1}
	};
	cout << solution.numIslands(vec) << endl;
	system("pause");
	return 0;
}