#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param matrix: a matrix
	 * @return: return true if same.
	 */
	bool judgeSame(vector<vector<int>>& matrix) {
		int size = matrix.size();
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				int temp = matrix[size - j - 1][size - i - 1];
				if (temp != matrix[i][j]) {
					return false;
				}
			}
		}
		return true;
	}
};
int main()
{
	Solution solution;
	vector<vector<int>>matrix = {
		{1,2,3},{5,1,2},{6,5,1}
	};
	solution.judgeSame(matrix);
	system("pause");
	return 0;
}