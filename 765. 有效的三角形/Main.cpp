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
	 * @param a: a integer represent the length of one edge
	 * @param b: a integer represent the length of one edge
	 * @param c: a integer represent the length of one edge
	 * @return: whether three edges can form a triangle
	 */
	bool isValidTriangle(int a, int b, int c) {
		if (a + b <= c or a + c <= b or b + c <= a) {
			return false;
		}
		return true;
	}
};
int main()
{
	Solution solution;
	cout << boolalpha << solution.isValidTriangle(2, 3, 4);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}