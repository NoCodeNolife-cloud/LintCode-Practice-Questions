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
class Solution {
public:
	/**
	 * @param points: n points on a 2D plane
	 * @return: if there is such a line parallel to y-axis that reflect the given points
	 */
	bool isReflected(vector<vector<int>>& points) {
		unordered_map<int, set<int>>m;
		int mx = INT_MIN, mn = INT_MAX;
		for (auto a : points) {
			mx = max(mx, a[0]);//save max
			mn = min(mn, a[0]);//save min
			m[a[0]].insert(a[1]);
		}
		double y = (double)(mx + mn) / 2;
		for (auto a : points) {
			int t = 2 * y - a[0];
			if (!m.count(t) or !m[t].count(a[1])) {
				return false;
			}
		}
		return true;
	}
};
int main()
{
	vector<vector<int>>points = { {1, 1}, {-1, 1} };
	Solution solution;
	cout << boolalpha << solution.isReflected(points);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}