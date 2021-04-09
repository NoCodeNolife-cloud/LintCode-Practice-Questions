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
	 * @param year: a number year
	 * @param month: a number month
	 * @return: Given the year and the month, return the number of days of the month.
	 */
	int getTheMonthDays(int year, int month) {
		vector<int>day = {
			31,0,31,30,31,30,31,31,30,31,30,31
		};
		if ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0) {
			day[1] = 29;
		}
		else {
			day[1] = 28;
		}
		return day[month - 1];
	}
};
int main()
{
	Solution solution;
	cout << solution.getTheMonthDays(2020, 2);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}