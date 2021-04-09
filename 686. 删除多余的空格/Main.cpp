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
	 * @param s: the original string
	 * @return: the string without arbitrary spaces
	 */
	string removeExtra(string& s) {
		vector<string> count;
		istringstream ss(s);
		string  str;
		while (ss >> str) {
			count.push_back(str);
		}
		string res;
		size_t size = count.size();
		for (int i = 0; i < size; ++i) {
			res += count[i];
			if (i != size - 1) {
				res += ' ';
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string s = "The  sky   is blue";
	cout << solution.removeExtra(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}