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
	 * @param area: web page’s area
	 * @return: the length L and the width W of the web page you designed in sequence
	 */
	vector<int> constructRectangle(int area) {
		vector<int>res;
		int gap = INT_MAX;
		for (int i = sqrt(area); i >= 0; i--) {
			int j = area / i;
			if (j * i == area) {
				if (i > j) {
					res.push_back(i);
					res.push_back(j);
				}
				else {
					res.push_back(j);
					res.push_back(i);
				}
				return res;
			}
		}
	}
};
int main()
{
	Solution solution;
	vector<int>res = solution.constructRectangle(4);
	for (vector<int>::iterator iter = res.begin(); iter != res.end(); iter++) {
		cout << setw(4) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}