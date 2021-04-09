#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param n: the given number
	 * @return: Sum of elements in subsets
	 */
	int subSum(int n) {
		int sum = 0;
		for (int i = 1; i <= n; ++i) {
			sum += pow(2, n - 1) * i;
		}
		return sum;
	}
};
int main()
{
	Solution solution;
	cout << solution.subSum(4);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}