#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param ops: the list of operations
	 * @return:  the sum of the points you could get in all the rounds
	 */
	int calPoints(vector<string>& ops) {
		int res = 0;
		vector<int>get;
		for (int i = 0; i < ops.size(); i++) {
			if (ops[i][0] == '-' or isdigit(ops[i][0])) {
				int temp = changeToInt(ops[i]);
				get.push_back(temp);
			}
			else if (ops[i] == "+") {
				int temp = get[get.size() - 1] + get[get.size() - 2];
				get.push_back(temp);
			}
			else if (ops[i] == "D") {
				int temp = get[get.size() - 1] * 2;
				get.push_back(temp);
			}
			else if (ops[i] == "C") {
				get.pop_back();
			}
		}
		for (int i = 0; i < get.size(); i++) {
			res += get[i];
		}
		return res;
	}
	int changeToInt(string str) {
		int res = 0;
		if (str[0] == '-') {
			for (int i = 1; i < str.size(); ++i) {
				res += (str[i] - '0') * pow(10, str.size() - 1 - i);
			}
			return -res;
		}
		else {
			for (int i = 0; i < str.size(); ++i) {
				res += (str[i] - '0') * pow(10, str.size() - i - 1);
			}
			return res;
		}
	}
};
int main()
{
	vector<string> ops = { "5","-2","4","C","D","9","+","+" };
	Solution solution;
	cout << solution.calPoints(ops);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}