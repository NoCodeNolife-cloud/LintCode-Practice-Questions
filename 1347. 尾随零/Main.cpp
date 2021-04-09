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
	 * @param n: a integer
	 * @return: return a integer
	 */
	int trailingZeroes(int n) {
		if (n >= 5) {
			return n / 5 + trailingZeroes(n / 5);
		}
		else {
			return 0;
		}
	}
};
int main()
{
	Solution solution;
	cout << solution.trailingZeroes(5);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}