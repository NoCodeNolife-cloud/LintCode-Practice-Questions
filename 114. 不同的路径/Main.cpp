#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param m: positive integer (1 <= m <= 100)
	 * @param n: positive integer (1 <= n <= 100)
	 * @return: An integer
	 */
	int uniquePaths(int m, int n) {
		vector<vector<int>>count(m, vector<int>(n, 1));
		for (int i = m - 2; i >= 0; --i) {
			for (int j = n - 2; j >= 0; --j) {
				count[i][j] = count[i + 1][j] + count[i][j + 1];
			}
		}
		return count[0][0];
	}
};
int main()
{
	Solution solution;
	cout << solution.uniquePaths(8, 68);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}