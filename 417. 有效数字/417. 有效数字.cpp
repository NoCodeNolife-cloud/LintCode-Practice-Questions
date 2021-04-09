#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cctype>
using namespace std;
class Solution {
public:
	/**
	 * @param s: the string that represents a number
	 * @return: whether the string is a valid number
	 */
	bool isNumber(string& s) {
		int n = s.size();
		int i = 0, num = 0, point = 0;
		while (s[i] == ' ') {//the space of the head
			++i;
		}
		if (s[i] == '+' or s[i] == '-') {//head of sign
			++i;
		}
		while (i < n and (isdigit(s[i]) or s[i] == '.')) {
			s[i] == '.' ? ++point : ++num;
			++i;
		}
		if (point > 1 or num < 1) {//the number of point no more than one and the number of digit no less than one
			return false;
		}
		if (s[i] == 'e') {//scientific notation
			++i;
			if (s[i] == '+' or s[i] == '-') {//the sign can be the next of the character 'e'
				++i;
			}
			num = 0;
			while (isdigit(s[i])) {
				++num;
				++i;
			}
			if (num < 1) {
				return false;
			}
		}
		while (s[i] == ' ') {
			++i;
		}
		return i == n;
	}
};
int main()
{
	string str = "1 a";
	Solution solution;
	if (solution.isNumber(str)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	system("pause");
	return 0;
}