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
	* @param S: a string
	* @return: return a list of strings
	*/
	vector<string> letterCasePermutation(string& S) {
		vector<string>res;
		if (S.size() == 0) {
			return res;
		}
		else {
			if (isalpha(S[0])) {
				string str;
				str += tolower(S[0]);
				res.push_back(str);
				str.clear();
				str += toupper(S[0]);
				res.push_back(str);
			}
			else {
				string str;
				str += S[0];
				res.push_back(str);
			}
		}
		for (int i = 1; i < S.size(); i++) {
			if (isalpha(S[i])) {
				vector<string>vec;
				string str;
				for (int j = 0; j < res.size(); j++) {
					str = res[j];
					str += tolower(S[i]);
					vec.push_back(str);
					str = res[j];
					str += toupper(S[i]);
					vec.push_back(str);
				}
				res = vec;
			}
			else {
				for (int j = 0; j < res.size(); j++) {
					res[j].push_back(S[i]);
				}
			}
		}
		return res;
	}
};
int main()
{
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}