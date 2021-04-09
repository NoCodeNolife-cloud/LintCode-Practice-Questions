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
class Solution {
public:
	/**
	 * @param x: the base number
	 * @param n: the power number
	 * @return: the result
	 */
	double myPow(double x, int n) {
		unsigned int exp = n > 0 ? n : -n;
		if (n == 0) {
			return 1.f;
		}
		double y = 1.0f;
		while (exp != 0) {
			if (exp & 0x1) {
				y *= x;
			}
			x *= x;
			exp >>= 1;
		}
		return n > 0 ? y : 1.0f / y;
	}
};
int main()
{
	Solution solution;
	cout << solution.myPow(0.44528, 0);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}