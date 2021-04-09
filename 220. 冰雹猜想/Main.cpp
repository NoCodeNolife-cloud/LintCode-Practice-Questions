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
	 * @param num: an integer
	 * @return: return an integer
	 */
	int getAnswer(int num) {
		int res = 0;
		while (num != 1) {
			res++;
			if (num % 2 == 0) {
				num /= 2;
			}
			else {
				num = num * 3 + 1;
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	cout << solution.getAnswer(4);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}