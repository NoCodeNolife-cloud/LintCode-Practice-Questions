#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param s: a string
	 * @return: a string
	 */
	string largestLetter(string& s) {
		char findUpper = 'Z';
		char findLower = 'z';
		while (findUpper >= 'A') {
			int count = 0;
			if (s.find(findUpper) != string::npos) {
				count++;
			}
			if (s.find(findLower) != string::npos) {
				count++;
			}
			if (count == 2) {
				string res(1, findUpper);
				return res;
			}
			findUpper--;
			findLower--;
		}
		return "NO";
	}
};
int main()
{
	string s = "admeDCAB";
	Solution solution;
	cout << solution.largestLetter(s) << endl;
	system("pause");
	return 0;
}