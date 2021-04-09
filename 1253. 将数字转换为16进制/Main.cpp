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
	 * @return: convert the integer to hexadecimal
	 */
	string toHex(int num) {
		if (num == 0) {
			return "0";
		}
		int len = 0;
		string ans = "";
		while (num && len < 8) {
			int bit = num & 15;
			if (bit < 10) {
				ans = (char)('0' + bit) + ans;
			}
			else {
				ans = (char)('a' + bit - 10) + ans;
			}
			num >>= 4;
			len++;
		}
		return ans;
	}
};
int main()
{
	Solution solution;
	cout << solution.toHex(-21);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}