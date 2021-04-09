#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param matrix: an input matrix
	 * @return: nums[0]: the maximum,nums[1]: the minimum
	 */
	vector<int> maxAndMin(vector<vector<int>>& matrix) {
		vector<int>res;
		if (matrix.size() == 0) {
			return res;
		}
		int max = INT_MIN, min = INT_MAX;
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[0].size(); j++) {
				if (max < matrix[i][j]) {
					max = matrix[i][j];
				}
				if (min > matrix[i][j]) {
					min = matrix[i][j];
				}
			}
		}
		res.push_back(max);
		res.push_back(min);
		return res;
	}
};
int main()
{
	vector<vector<int>> matrix = {
		{1,2,3} ,
		{4,3,2},
		{6,4,4}
	};
	Solution solution;
	vector<int>res = solution.maxAndMin(matrix);
	vector<int>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << setw(5) << left << *iter << endl;
	}
	system("pause");
	return 0;
}