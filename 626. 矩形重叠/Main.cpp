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
using namespace std;
struct Point {
	int x;
	int y;
	Point() : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};

class Solution {
public:
	/**
	 * @param l1: top-left coordinate of first rectangle
	 * @param r1: bottom-right coordinate of first rectangle
	 * @param l2: top-left coordinate of second rectangle
	 * @param r2: bottom-right coordinate of second rectangle
	 * @return: true if they are overlap or false
	 */
	bool doOverlap(Point& l1, Point& r1, Point& l2, Point& r2) {
		double w1 = abs(l1.x - r1.x) / 2.0, w2 = abs(l2.x - r2.x) / 2.0;
		double w3 = abs(l1.y - r1.y) / 2.0, w4 = abs(l2.y - r2.y) / 2.0;
		double middle1x, middle1y, middle2x, middle2y;
		middle1x = (l1.x + r1.x) / 2.0;
		middle1y = (l1.y + r1.y) / 2.0;
		middle2x = (l2.x + r2.x) / 2.0;
		middle2y = (l2.y + r2.y) / 2.0;
		if (abs(middle1x - middle2x) <= w1 + w2 and abs(middle1y - middle2y) <= w3 + w4) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main()
{
	Point p1(0, 8), p2(8, 0), p3(6, 6), p4(10, 0);
	Solution solution;
	cout << boolalpha << solution.doOverlap(p1, p2, p3, p4);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}