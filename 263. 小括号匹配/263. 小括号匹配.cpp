#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	/**
	 * @param string: A string
	 * @return: whether the string is a valid parentheses
	 */
	bool matchParentheses(string& string) {
		int temp = 0;
		for (int i = 0; i < string.size(); i++) {
			if (string[i] == '(') {
				temp++;
			}
			else if (string[i] == ')') {
				temp--;
				if (temp < 0) {
					return false;
				}
			}
		}
		return true;
	}
};
int main()
{
	string str = "(())()";
	Solution solution;
	if (solution.matchParentheses(str)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	system("pause");
	return 0;
}