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
	 * @param n: An integer
	 * @return: True or false
	 */
	bool checkPowerOf2(int n) {
		if (n == 0) {
			return false;
		}
		while (n % 2 == 0) {
			n /= 2;
		}
		return n == 1;
	}
};
int main()
{
	Solution solution;
	cout << boolalpha << solution.checkPowerOf2(16);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}