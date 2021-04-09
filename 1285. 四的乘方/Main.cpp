#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
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
	 * @param num: an integer
	 * @return: whether the integer is a power of 4
	 */
	bool isPowerOfFour(int num) {
		if (num <= 0) {
			return false;
		}
		while (num != 0) {
			if (num % 4 != 0 and num != 1) {
				return false;
			}
			else {
				num /= 4;
			}
		}
		return true;
	}
};
int main()
{
	Solution solution;
	cout << boolalpha << solution.isPowerOfFour(16);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}