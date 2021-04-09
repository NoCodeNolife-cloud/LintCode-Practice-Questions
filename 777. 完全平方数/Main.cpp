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
	 * @param num: a positive integer
	 * @return: if num is a perfect square else False
	 */
	bool isPerfectSquare(int num) {
		int number = sqrt(num);
		if (number == sqrt(num)) {
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
	cout << boolalpha << solution.isPerfectSquare(15);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}