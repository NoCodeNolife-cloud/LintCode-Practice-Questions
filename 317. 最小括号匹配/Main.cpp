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
	 * @param s: The original string
	 * @return:  the lexicographical order of the smallest parentheses to match the legal sequence
	 */
	string minimumParenthesesMatching(string& s) {
		string res;
		int left = 0;
		int point = 0;
		bool hasleft = false;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
				if (hasleft == true) {
					if (point < left) {
						return "No solution!";
					}
					for (int j = 0; j < left; j++) {
						res += ')';
					}
					left = 0;
					point = 0;
					hasleft = false;
				}
				res += '(';
				left++;
			}
			else if (s[i] == '*') {
				point++;
			}
			else if (s[i] == ')') {
				left--;
				hasleft = true;
				res += ')';
			}
		}
		if (left >= point and left > 0) {
			for (int i = 0; i < left; i++) {
				res += ')';
			}
		}
		else if (left < point) {
			return "No solution!";;
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string s = "((***)()((**";
	cout << solution.minimumParenthesesMatching(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}