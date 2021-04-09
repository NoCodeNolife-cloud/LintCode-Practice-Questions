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
	 * @return: the complement number
	 */
	int findComplement(int num) {
		vector<int>res;
		while (num != 0) {
			res.push_back(num % 2);
			num /= 2;
		}
		for (int& x : res) {
			if (x == 1) {
				x = 0;
			}
			else {
				x = 1;
			}
		}
		int count = 0;
		for (int i = 0; i < res.size(); i++) {
			count += pow(2, i) * res[i];
		}
		return count;
	}
};
int main()
{
	Solution solution;
	cout << solution.findComplement(5);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}