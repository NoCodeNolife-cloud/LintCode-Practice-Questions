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
	 * @param m: an integer
	 * @param n: an integer
	 * @param ops: List[List[int]]
	 * @return: return an integer
	 */
	int maxCount(int m, int n, vector<vector<int>>& ops) {
		int minLines = m, minCols = n;
		for (size_t i = 0; i < ops.size(); ++i)
		{
			minLines = min(minLines, ops[i][0]);
			minCols = min(minCols, ops[i][1]);
		}
		return minCols * minLines;
	}
};
int main()
{
	Solution solution;
	vector<vector<int>>ops = {
		{2,2},{3,3}
	};
	cout << solution.maxCount(3, 3, ops);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}