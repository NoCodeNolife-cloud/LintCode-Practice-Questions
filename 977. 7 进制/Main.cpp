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
	 * @param num: the given number
	 * @return: The base 7 string representation
	 */
	string convertToBase7(int num) {
		string res;
		if (num >= 0) {
			while (num != 0) {
				res.push_back(num % 7 + '0');
				num /= 7;
			}
			reverse(res.begin(), res.end());
			return res;
		}
		else {
			num = abs(num);
			while (num != 0) {
				res.push_back(num % 7 + '0');
				num /= 7;
			}
			reverse(res.begin(), res.end());
			return "-" + res;
		}
	}
};
int main()
{
	Solution solution;
	cout << solution.convertToBase7(-7);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}