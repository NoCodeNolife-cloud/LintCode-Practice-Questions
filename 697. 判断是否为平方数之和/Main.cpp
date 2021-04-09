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
	 * @return: whether whether there're two integers
	 */
	bool checkSumOfSquareNumbers(int num) {
		if (num < 0) {
			return false;
		}
		else {
			for (int i = 0; 1;) {
				int temp = num - i * i;
				if (int(sqrt(temp)) == sqrt(temp)) {
					return true;
				}
				if (i + 1 <= sqrt(num)) {
					i++;
				}
				else {
					break;
				}
			}
		}
		return false;
	}
};
int main()
{
	Solution solution;
	cout << boolalpha << solution.checkSumOfSquareNumbers(5);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}