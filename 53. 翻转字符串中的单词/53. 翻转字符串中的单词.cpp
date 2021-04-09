#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	/*
	 * @param s: A string
	 * @return: A string
	 */
	string reverseWords(string& s) {
		if (s.find_first_not_of(' ') == string::npos) {
			return "";
		}
		string res;
		int i = s.length() - 1;
		do {
			vector<char>temp;
			for (; i >= 0 and s[i] != ' '; i--) {
				temp.push_back(s[i]);
			}
			i--;
			reverse(temp.begin(), temp.end());
			if (temp.size() > 0) {
				for (int j = 0; j < temp.size(); j++) {
					res += temp[j];
				}
				res += ' ';
			}
		} while (i >= 0);
		return res;
	}
};
class Solution1 {
public:
	/*
	 * @param s: A string
	 * @return: A string
	 */
	string reverseWords(string& s) {
		string ss;
		int i = s.length() - 1;
		while (i >= 0) {
			while (i >= 0 and s[i] == ' ') {
				i--;
			}
			if (i < 0) {
				break;
			}
			if (ss.length() != 0) {
				ss.push_back(' ');
			}
			string temp;
			for (; i >= 0 and s[i] != ' '; i--) {
				temp.push_back(s[i]);
			}
			reverse(temp.begin(), temp.end());
			ss.append(temp);
		}
		s = ss;
		return s;
	}
};
int main()
{
	Solution solution;
	string str = "I love to walk around in bookstores       not because I can buy all the books";
	cout << solution.reverseWords(str) << endl;
	system("pause");
	return 0;
}