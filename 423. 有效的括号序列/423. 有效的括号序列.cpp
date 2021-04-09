#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
	/**
	 * @param s: A string
	 * @return: whether the string is a valid parentheses
	 */

	 /**
	  * @brief: my answer
	  * @param s
	  * @return
	 */
	bool isValidParentheses(string& s) {
		stack<char>count;
		for (int i = s.length() - 1; i >= 0; i--) {
			count.push(s[i]);
		}
		stack<char>temp;
		int size = count.size();
		for (int i = 0; i < size; i++) {
			char ch = count.top();
			count.pop();
			if (ch == '(' or ch == '{' or ch == '[') {
				temp.push(ch);
			}
			else if (ch == ')') {
				if (temp.top() == '(') {
					temp.pop();
					continue;
				}
				else {
					return false;
				}
			}
			else if (ch == ']') {
				if (temp.top() == '[') {
					temp.pop();
					continue;
				}
				else {
					return false;
				}
			}
			else if (ch == '}') {
				if (temp.top() == '{') {
					temp.pop();
					continue;
				}
				else {
					return false;
				}
			}
		}
		if (temp.size() == 0) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main()
{
	string str = "((";
	Solution solution;
	cout << solution.isValidParentheses(str) << endl;
	system("pause");
	return 0;
}