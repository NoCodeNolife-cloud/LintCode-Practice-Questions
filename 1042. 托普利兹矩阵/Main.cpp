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
	 * @param matrix: the given matrix
	 * @return: True if and only if the matrix is Toeplitz
	 */
	bool isToeplitzMatrix(vector<vector<int>>& matrix) {
		if (matrix.size() == 1 or matrix[0].size() == 1) {
			return true;
		}
		for (int i = 1; i < matrix.size(); i++) {
			for (int j = 1; j < matrix[0].size(); j++) {
				if (matrix[i - 1][j - 1] != matrix[i][j]) {
					return false;
				}
			}
		}
		return true;
	}
};
int main()
{
	vector<vector<int>>matrix = {
		{1,2,3,4},{5,1,2,3},{9,5,1,2 }
	};
	Solution solution;
	cout << boolalpha << solution.isToeplitzMatrix(matrix);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}