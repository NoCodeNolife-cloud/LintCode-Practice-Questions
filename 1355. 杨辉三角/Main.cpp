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
	 * @param numRows: num of rows
	 * @return: generate Pascal's triangle
	 */
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>>res(numRows, vector<int>());
		res[0].push_back(1);
		if (numRows == 1) {
			return res;
		}
		res[1].push_back(1);
		res[1].push_back(1);
		if (numRows == 2) {
			return res;
		}
		for (int i = 2; i < numRows; i++) {
			res[i].push_back(1);
			int index = 0;
			for (int j = 0; j < i - 1; j++) {
				res[i].push_back(res[i - 1][index] + res[i - 1][index + 1]);
				index++;
			}
			res[i].push_back(1);
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<vector<int>>res = solution.generate(5);
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << setw(5) << left << res[i][j];
		}
		cout << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}