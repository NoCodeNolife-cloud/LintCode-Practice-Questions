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
	 * @param n: an integer
	 * @return: if n is a power of three
	 */
	bool isPowerOfThree(int n) {
		if (n == 1) {
			return true;
		}
		else if (n == 0) {
			return false;
		}
		while (n % 3 == 0) {
			n /= 3;
		}
		if (n == 1) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main()
{
	Solution solution;
	cout << boolalpha << solution.isPowerOfThree(9);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}