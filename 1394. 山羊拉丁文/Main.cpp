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
	 * @param S:
	 * @return: nothing
	 */
	string  toGoatLatin(string& S) {
		vector<string> ves;
		istringstream ss(S);
		string str;
		while (ss >> str)
		{
			ves.push_back(str);
		}
		for (int i = 0; i < ves.size(); i++) {
			if (ves[i][0] == 'a' or ves[i][0] == 'e' or ves[i][0] == 'i' or ves[i][0] == 'o' or ves[i][0] == 'u' or ves[i][0] == 'A' or ves[i][0] == 'E' or ves[i][0] == 'I' or ves[i][0] == 'O' or ves[i][0] == 'U') {
				ves[i] += "ma";
			}
			else {
				string temp = ves[i].substr(1, ves[i].size() - 1);
				char s = ves[i][0];
				temp += s;
				temp += "ma";
				ves[i] = temp;
			}
		}
		for (int i = 0; i < ves.size(); i++) {
			cout << ves[i] << endl;
		}
		string tempstr, res;
		for (int i = 0; i < ves.size(); i++) {
			tempstr += "a";
			ves[i] += tempstr;
			res += ves[i];
			if (i != ves.size()) {
				res += " ";
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string S = "I speak Goat Latin";
	cout << solution.toGoatLatin(S);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}