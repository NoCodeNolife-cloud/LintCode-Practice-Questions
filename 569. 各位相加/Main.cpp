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
	 * @param num: a non-negative integer
	 * @return: one digit
	 */
	int addDigits(int num) {
		do {
			vector<int>count;
			while (num != 0) {
				count.push_back(num % 10);
				num /= 10;
			}
			num = 0;
			size_t size = count.size();
			for (int i = 0; i < size; ++i) {
				num += count[i];
			}
		} while (num >= 10);
		return num;
	}
};
int main()
{
	Solution solution;
	cout << solution.addDigits(38);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}