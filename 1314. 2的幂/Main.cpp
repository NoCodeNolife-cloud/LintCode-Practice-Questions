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
	 * @param n: an integer
	 * @return: if n is a power of two
	 */
	bool isPowerOfTwo(int n) {
		while (n != 0) {
			if (n != 1 and n % 2 == 1) {
				return false;
			}
			n /= 2;
		}
		return true;
	}
};
int main()
{
	Solution solution;
	cout << boolalpha << solution.isPowerOfTwo(3);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}