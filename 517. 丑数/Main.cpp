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
	 * @param num: An integer
	 * @return: true if num is an ugly number or false
	 */
	bool isUgly(int num) {
		if (num == 0) {
			return false;
		}
		while (num % 2 == 0) {
			num /= 2;
		}
		while (num % 3 == 0) {
			num /= 3;
		}
		while (num % 5 == 0) {
			num /= 5;
		}
		if (num == 1) {
			return true;
		}
		return false;
	}
};
int main()
{
	Solution solution;
	cout << boolalpha << solution.isUgly(10) << endl;
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}