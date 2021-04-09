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
	 * @param rowIndex: a non-negative index
	 * @return: the kth index row of the Pascal's triangle
	 */
	vector<int> getRow(int rowIndex) {
		vector<vector<int>>count(rowIndex + 1, vector<int>());
		count[0].push_back(1);
		if (rowIndex == 0) {
			return count[0];
		}
		count[1].push_back(1);
		count[1].push_back(1);
		if (rowIndex == 1) {
			return count[1];
		}
		for (int i = 2; i <= rowIndex; i++) {
			count[i].push_back(1);
			for (int j = 0; j < i - 1; j++) {
				count[i].push_back(count[i - 1][j] + count[i - 1][j + 1]);
			}
			count[i].push_back(1);
		}
		return count[rowIndex];
	}
};
int main()
{
	Solution solution;
	vector<int>res = solution.getRow(4);
	for (int i = 0; i < res.size(); i++) {
		cout << setw(4) << left << res[i];
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}