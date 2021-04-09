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
	 * @param str: An array of char
	 * @param left: a left offset
	 * @param right: a right offset
	 * @return: return a rotate string
	 */
	string RotateString2(string& str, int left, int right) {
		if (left == right) {
			return str;
		}
		else if (left > right) {
			int temp = (left - right) % str.size();
			string temp_1 = str.substr(0, temp), temp_2 = str.substr(temp, str.size() - temp);
			return temp_2 + temp_1;
		}
		else {
			int temp = (right - left) % str.size();
			string temp_1 = str.substr(str.size() - temp, temp), temp_2 = str.substr(0, str.size() - temp);
			return temp_1 + temp_2;
		}
	}
};
int main()
{
	string str = "abcdefg";
	Solution solution;
	cout << solution.RotateString2(str, 1, 2);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}