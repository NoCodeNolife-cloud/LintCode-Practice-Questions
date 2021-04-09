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
	 * @param n: a positive integer
	 * @return: the nth digit of the infinite integer sequence
	 */
	int findNthDigit(int n) {
		long long len = 1, cnt = 9, start = 1;
		while (n > len * cnt) {
			n -= len * cnt;
			++len;
			cnt *= 10;
			start *= 10;
		}
		start += (n - 1) / len;
		string t = to_string(start);
		return t[(n - 1) % len] - '0';
	}
};
int main()
{
	Solution solution;
	cout << solution.findNthDigit(11);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}