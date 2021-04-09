#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
/*-------------------------------------------------------*/
class Solution {
public:
	/**
	 * @param matrix: An array of integers
	 * @return: An array of integers
	 */
	vector<int> printZMatrix(vector<vector<int>>& matrix) {
		vector<int>ret;
		if (matrix.empty() || matrix[0].empty()) {
			return ret;
		}
		int n = matrix.size(), m = matrix[0].size();
		int i, j;
		for (int s = 0; s <= n + m - 2; ++s) {
			if (s % 2 != 0) {
				for (j = min(s, m - 1), i = s - j; i < n and i >= 0 and j < m and j >= 0; ++i, --j) {
					ret.push_back(matrix[i][j]);
				}
			}
			else {
				for (i = min(s, n - 1), j = s - i; i >= 0 and i < n and j >= 0 and j < m; --i, ++j) {
					ret.push_back(matrix[i][j]);
				}
			}
		}
		return ret;
	}
};
int main()
{
	vector<vector<int>>matrix = {
		{1, 2, 3, 4},
			{5, 6, 7, 8},
			{9, 10, 11, 12}
	};
	Solution solution;
	vector<int>res = solution.printZMatrix(matrix);
	for (int x : res) {
		cout << setw(5) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}