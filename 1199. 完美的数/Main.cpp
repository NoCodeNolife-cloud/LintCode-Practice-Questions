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
	 * @return: returns true when it is a perfect number and false when it is not
	 */
	bool checkPerfectNumber(int num) {
		vector<int>count;
		count.push_back(1);
		if (num == 1) {
			return false;
		}
		for (int i = 2; i < sqrt(num); i++) {
			if (num % i == 0) {
				count.push_back(i);
				count.push_back(num / i);
			}
		}
		int sum = 0;
		for (vector<int>::iterator iter = count.begin(); iter != count.end(); iter++) {
			sum += *iter;
		}
		if (sum == num) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main()
{
	Solution solution;
	cout << boolalpha << solution.checkPerfectNumber(28);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}