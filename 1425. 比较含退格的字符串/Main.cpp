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
	 * @param S: string S
	 * @param T: string T
	 * @return: Backspace String Compare
	 */
	bool backspaceCompare(string& S, string& T) {
		string temps, tempt;
		for (int i = 0; i < S.size(); i++) {
			if (S[i] == '#') {
				if (temps.size() > 0) {
					temps.pop_back();
				}
				else {
					continue;
				}
			}
			else {
				temps.push_back(S[i]);
			}
		}
		for (int i = 0; i < T.size(); i++) {
			if (T[i] == '#') {
				if (tempt.size() > 0) {
					tempt.pop_back();
				}
				else {
					continue;
				}
			}
			else {
				tempt.push_back(T[i]);
			}
		}
		if (temps == tempt) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main()
{
	Solution solution;
	string S = "a##c", T = "#a#c";
	cout << boolalpha << solution.backspaceCompare(S, T);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}