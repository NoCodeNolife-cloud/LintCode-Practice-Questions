#include <algorithm>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution2 {
public:
	/**
	 * @param n: An integer
	 * @return: An integer
	 */
	int climbStairs(int n) {
		int a = min(n, 1);
		for (auto i = 1, b = a; i < n; ++i, b = a - b) {
			a += b;
		}
		return a;
	}
};
class Solution {
public:
	/**
	 * @param n: An integer
	 * @return: An integer
	 */
	int climbStairs(int n) {
		if (n <= 2)
			return n;
		int* step = new int[n];
		step[0] = 1;
		step[1] = 2;
		for (int i = 2; i < n; i++) {
			step[i] = step[i - 1] + step[i - 2];
		}
		return step[n - 1];
	}
};
using namespace std;
int main()
{
	Solution solution;
	cout << solution.climbStairs(30) << endl;
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}