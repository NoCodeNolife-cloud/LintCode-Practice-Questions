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
	 * @param num1: a non-negative integers
	 * @param num2: a non-negative integers
	 * @return: return sum of num1 and num2
	 */
	string addStrings(string& num1, string& num2) {
		string res;
		int m = num1.size(), n = num2.size(), i = m - 1, j = n - 1, flag = 0;
		while (i >= 0 or j >= 0) {
			int a, b;
			if (i >= 0) {
				a = num1[i--] - '0';
			}
			else {
				a = 0;
			}
			if (j >= 0) {
				b = num2[j--] - '0';
			}
			else {
				b = 0;
			}
			int sum = a + b + flag;
			res.insert(res.begin(), sum % 10 + '0');
			flag = sum / 10;
		}
		return flag ? "1" + res : res;
	}
};
int main()
{
	string num1 = "123", num2 = "45";
	Solution solution;
	cout << solution.addStrings(num1, num2);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}