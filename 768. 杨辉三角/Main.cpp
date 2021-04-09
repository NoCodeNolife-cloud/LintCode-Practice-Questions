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
	 * @return: the first n-line Yang Hui's triangle
	 */
	vector<vector<int>> calcYangHuisTriangle(int n) {
		vector<vector<int>>res(n, vector<int>());
		res[0].push_back(1);
		if (n == 1) {
			return res;
		}
		res[1].push_back(1);
		res[1].push_back(1);
		if (n == 2) {
			return res;
		}
		for (int i = 2; i < n; i++) {
			res[i].push_back(1);
			for (int j = 0; j < i - 1; j++) {
				res[i].push_back(res[i - 1][j] + res[i - 1][j + 1]);
			}
			res[i].push_back(1);
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<vector<int>>res = solution.calcYangHuisTriangle(4);
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