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
	 * @param n: an unsigned integer
	 * @return: the number of ’1' bits
	 */
	int hammingWeight(int n) {
		int res = 0;
		while (n != 0) {
			if (n % 2 == 1) {
				res++;
			}
			n /= 2;
		}
		return res;
	}
};
int main()
{
	Solution solution;
	cout << solution.hammingWeight(11);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}