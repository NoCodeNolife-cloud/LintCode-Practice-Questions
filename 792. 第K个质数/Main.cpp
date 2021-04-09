#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param n: the number
	 * @return: the rank of the number
	 */
	int kthPrime(int n) {
		int res = 0;
		for (int i = 2; i < n; ++i) {
			bool find = false;
			for (int j = 2; j <= sqrt(i); ++j) {
				if (i % j == 0) {
					find = true;
				}
			}
			if (!find) {
				++res;
			}
		}
		return res + 1;
	}
};
int main()
{
	Solution solution;
	cout << solution.kthPrime(11);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}