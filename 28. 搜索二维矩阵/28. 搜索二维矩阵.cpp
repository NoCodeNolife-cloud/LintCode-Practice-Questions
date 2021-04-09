/*
* 取的mid要还原为二维数组中的下标，i=mid/n,j=mid%n;
*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param matrix: matrix, a list of lists of integers
	 * @param target: An integer
	 * @return: a boolean, indicate whether matrix contains target
	 */
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int n = matrix.size();
		if (n == 0) {
			return false;
		}
		int m = matrix[0].size();
		if (m == 0) {
			return false;
		}
		int start = 0, end = n * m - 1;
		while (start + 1 < end) {
			int mid = start + (end - start) / 2;
			int row = mid / m;
			int col = mid % m;
			if (matrix[row][col] < target) {
				start = mid;
			}
			else {
				end = mid;
			}
		}
		if (matrix[start / m][start % m] == target) {
			return true;
		}
		if (matrix[end / m][end % m] == target) {
			return true;
		}
		return false;
	}
}; int main() {
	vector<vector<int>>matrix(3);
	matrix[0].push_back(1);
	matrix[0].push_back(3);
	matrix[0].push_back(5);
	matrix[0].push_back(7);
	matrix[1].push_back(10);
	matrix[1].push_back(11);
	matrix[1].push_back(16);
	matrix[1].push_back(20);
	matrix[2].push_back(23);
	matrix[2].push_back(30);
	matrix[2].push_back(34);
	matrix[2].push_back(50);
	Solution solution;
	if (solution.searchMatrix(matrix, 10)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	system("pause");
	return 0;
}