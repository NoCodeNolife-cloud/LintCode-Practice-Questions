#include <algorithm>
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
	 * @param n: a number represent year
	 * @return: whether year n is a leap year.
	 */
	bool isLeapYear(int n) {
		if ((n % 4 == 0 and n % 100 != 0) or n % 400 == 0) {
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
	cout << boolalpha << solution.isLeapYear(2020);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}