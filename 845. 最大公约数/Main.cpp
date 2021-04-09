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
	 * @param a: the given number
	 * @param b: another number
	 * @return: the greatest common divisor of two numbers
	 */
	int gcd(int a, int b) {
		if (a % b == 0) {
			return b;
		}
		else {
			return gcd(b, a % b);
		}
	}
};
int main()
{
	Solution solution;
	cout << solution.gcd(10, 15);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}