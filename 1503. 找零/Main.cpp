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
	 * @param amount: The amount you should pay.
	 * @return: Return the minimum number of coins for change.
	 */
	int giveChange(int amount) {
		int temp = 1024 - amount;
		int res = temp / 64;
		temp %= 64;
		res += temp / 16;
		temp %= 16;
		res += temp / 4;
		temp %= 4;
		res += temp;
		return res;
	}
};
int main()
{
	Solution solution;
	cout << solution.giveChange(1014);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}