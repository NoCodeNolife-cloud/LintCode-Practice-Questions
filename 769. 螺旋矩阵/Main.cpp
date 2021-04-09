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
	 * @param n: a Integer
	 * @return: a spiral array
	 */
	vector<vector<int>> spiralArray(int n) {
		vector<vector<int>>res(n, vector<int>(n, 0));
		int position[2] = { 0,-1 };
		int count = 0;
		lefttoright(res, n, position[0], position[1], count);
		for (int i = n - 1; i > 0;) {
			toptobutton(res, i, position[0], position[1], count);
			righttoleft(res, i, position[0], position[1], count);
			i--;
			if (count == n * n) {
				break;
			}
			buttontotop(res, i, position[0], position[1], count);
			lefttoright(res, i, position[0], position[1], count);
			i--;
			if (count == n * n) {
				break;
			}
		}
		return res;
	}
	void lefttoright(vector<vector<int>>& vec, int num, int& x, int& y, int& count) {
		int k;
		for (k = 1; k <= num; k++) {
			count++;
			vec[x][y + k] = count;
		}
		y = y + num;
	}
	void righttoleft(vector<vector<int>>& vec, int num, int& x, int& y, int& count) {
		int k;
		for (k = 1; k <= num; k++) {
			count++;
			vec[x][y - k] = count;
		}
		y = y - num;
	}
	void toptobutton(vector<vector<int>>& vec, int num, int& x, int& y, int& count) {
		int k;
		for (k = 1; k <= num; k++) {
			count++;
			vec[x + k][y] = count;
		}
		x = x + num;
	}
	void buttontotop(vector<vector<int>>& vec, int num, int& x, int& y, int& count) {
		int k;
		for (k = 1; k <= num; k++) {
			count++;
			vec[x - k][y] = count;
		}
		x = x - num;
	}
};
int main()
{
	Solution solution;
	vector<vector<int>>res = solution.spiralArray(4);
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[0].size(); j++) {
			cout << setw(3) << left << res[i][j];
		}
		cout << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}