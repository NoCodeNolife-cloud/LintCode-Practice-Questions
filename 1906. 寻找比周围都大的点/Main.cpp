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
class Solution {
public:
	/**
	 * @param grid: a matrix
	 * @return: Find all points that are strictly larger than their neighbors
	 */
	vector<vector<int>> highpoints(vector<vector<int>>& grid) {
		vector<vector<int>>res(grid.size(), vector<int>(grid[0].size(), 0));
		for (int i = 0; i < grid.size(); i++) {
			for (int j = 0; j < grid[i].size(); j++) {
				bool N = true, S = true, W = true, E = true;
				if (i == 0) {
					N = false;
				}
				if (i == grid.size() - 1) {
					S = false;
				}
				if (j == 0) {
					W = false;
				}
				if (j == grid[0].size() - 1) {
					E = false;
				}
				res[i][j] = int(compare(grid, i, j, N, S, W, E));
			}
		}
		return res;
	}
	bool compare(vector<vector<int>>grid, int x, int y, bool N, bool S, bool W, bool E) {
		if (N and grid[x][y] <= grid[x - 1][y]) {
			return false;
		}
		if (S and grid[x][y] <= grid[x + 1][y]) {
			return false;
		}
		if (W and grid[x][y] <= grid[x][y - 1]) {
			return false;
		}
		if (E and grid[x][y] <= grid[x][y + 1]) {
			return false;
		}
		if (N and W and grid[x][y] <= grid[x - 1][y - 1]) {
			return false;
		}
		if (N and E and grid[x][y] <= grid[x - 1][y + 1]) {
			return false;
		}
		if (S and W and grid[x][y] <= grid[x + 1][y - 1]) {
			return false;
		}
		if (S and E and grid[x][y] <= grid[x + 1][y + 1]) {
			return false;
		}
		return true;
	}
};
int main()
{
	vector<vector<int>>grid = { {1, 2, 3, 4}, {5, 5, 5, 2}, {1, 1, 1, 1}, {0, 0, 0, 9} };
	Solution solution;
	vector<vector<int>>res = solution.highpoints(grid);
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << setw(4) << left << res[i][j];
		}
		cout << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}