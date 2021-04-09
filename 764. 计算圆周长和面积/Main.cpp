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
	 * @param r: a Integer represent radius
	 * @return: the circle's circumference nums[0] and area nums[1]
	 */
	vector<double> calculate(int r) {
		vector<double>res;
		res.push_back(2 * 3.14 * r);
		res.push_back(3.14 * r * r);
		return res;
	}
};
int main()
{
	double r = 3;
	Solution solution;
	vector<double>res = solution.calculate(r);
	for (int i = 0; i < res.size(); i++) {
		cout << setw(10) << left << res[i];
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}