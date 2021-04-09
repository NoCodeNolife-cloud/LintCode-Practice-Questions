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
	 * @param points: List[List[int]]
	 * @return: return a double
	 */
	double largestTriangleArea(vector<vector<int>>& points) {
		double res = 0;
		size_t size = points.size();
		for (int i = 0; i < size - 2; i++) {
			for (int j = 1; j < size - 1; j++) {
				for (int k = 2; k < size; k++) {
					double a = distance(points[i][0], points[i][1], points[j][0], points[j][1]);
					double b = distance(points[i][0], points[i][1], points[k][0], points[k][1]);
					double c = distance(points[j][0], points[j][1], points[k][0], points[k][1]);
					double p = (a + b + c) / 2;
					double squre = sqrt(p * (p - a) * (p - b) * (p - c));
					res = max(res, squre);
				}
			}
		}
		return res;
	}
	double distance(int x, int y, int m, int n) {
		return sqrt(pow(abs(x - m), 2) + pow(abs(y - n), 2));
	}
};
int main()
{
	vector<vector<int>>points = { {0, 0}, {0, 1}, {1, 0}, {0, 2}, {2, 0} };
	Solution solution;
	cout << solution.largestTriangleArea(points);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}