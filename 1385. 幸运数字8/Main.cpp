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
	 * @param n: count lucky numbers from 1 ~ n
	 * @return: the numbers of lucky number
	 */
	int luckyNumber(int n) {
		if (n < 8) {
			return 0;
		}
		int res = 0;
		for (int j = 8; j <= n; j++) {
			int i = j;
			while (i != 0) {
				if (i % 10 == 8) {
					res++;
					break;
				}
				i /= 10;
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	cout << solution.luckyNumber(20);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}