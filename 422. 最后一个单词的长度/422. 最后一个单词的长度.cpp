#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	/**
	 * @param s: A string
	 * @return: the length of last word
	 */
	int lengthOfLastWord(string& s) {
		if (s.length() == 0 or s.find_first_not_of(' ') == string::npos) {
			return 0;
		}
		string temp = s;
		temp.erase(0, temp.find_first_not_of(' '));
		temp.erase(temp.find_last_not_of(' ') + 1);
		if (temp.find_first_of(' ') == string::npos) {
			return temp.length();
		}
		temp.erase(0, temp.find_last_of(' ') + 1);
		return temp.length();
	}
};
int main()
{
	string str = "  Hello LintCode   ";
	Solution solution;
	cout << solution.lengthOfLastWord(str) << endl;
	system("pause");
	return 0;
}