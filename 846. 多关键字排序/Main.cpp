#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
bool cmp(const vector<int>& x, const vector<int>& y) {
	return x[1] != y[1] ? x[1] > y[1]:x[0] < y[0];
}
class Solution {
public:
	/**
	 * @param array: the input array
	 * @return: the sorted array
	 */
	vector<vector<int>> multiSort(vector<vector<int>>& array) {
		sort(array.begin(), array.end(), cmp);
		return array;
	}
};

int main()
{
	vector<vector<int>>array = { {7, 66}, {4, 77}, {3, 63}, {5, 81}, {1, 88}, {9, 86}, {6, 88}, {2, 82}, {8, 55}, {10, 95} };
	Solution solution;
	vector<vector<int>>res = solution.multiSort(array);
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