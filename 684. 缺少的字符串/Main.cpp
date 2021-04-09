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
	 * @param str1: a given string
	 * @param str2: another given string
	 * @return: An array of missing string
	 */
	vector<string> missingString(string& str1, string& str2) {
		vector<string>res;
		vector<string>vec1, vec2;
		istringstream ss(str1);
		string s;
		while (ss >> s) {
			vec1.push_back(s);
		}
		if (str2.find_first_not_of(' ') == string::npos) {
			return vec1;
		}
		istringstream ss2(str2);
		while (ss2 >> s) {
			vec2.push_back(s);
		}
		for (int i = 0; i < vec1.size(); i++) {
			bool find = false;
			for (int j = 0; j < vec2.size(); j++) {
				if (vec2[j] == vec1[i]) {
					find = true;
					break;
				}
			}
			if (!find) {
				res.push_back(vec1[i]);
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string str1 = "This is an example";
	string str2 = "is example";
	vector<string>res = solution.missingString(str1, str2);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}