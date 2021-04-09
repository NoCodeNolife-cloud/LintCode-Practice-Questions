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
class Solution {
public:
	/**
	 * @param n: a integer
	 * @return: return a integer
	 */
	int countPrimes(int n) {
		if (n <= 0) {
			return 0;
		}
		int res = 0;
		bool* notPrime = new bool[n];
		for (int i = 0; i < n; i++) {
			notPrime[i] = false;
		}
		for (int i = 2; i < n; i++) {
			if (notPrime[i] == false) {
				res++;
			}
			for (int j = 2; i * j < n; j++) {
				notPrime[i * j] = true;
			}
		}
		return res;
	}
}; int main()
{
	Solution solution;
	cout << solution.countPrimes(1000);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}