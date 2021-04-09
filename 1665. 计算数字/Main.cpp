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
	 * @param num: the num
	 * @return: the array subject to the description
	 */
	vector<int> calculateNumber(int num) {
		int number = 0;
		vector<int>res;
		vector<int>count;
		while (num != 0) {
			count.push_back(num % 2);
			num /= 2;
		}
		reverse(count.begin(), count.end());
		for (int i = 0; i < count.size(); i++) {
			if (count[i] == 1) {
				res.push_back(i + 1);
				number++;
			}
		}
		res.insert(res.begin(), number);
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>res = solution.calculateNumber(10);
	for (int x : res) {
		cout << setw(4) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}