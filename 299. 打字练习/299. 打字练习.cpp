#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	/**
	 * @param s: A string
	 * @return: A string
	 */
	string getTextcontent(string& s) {
		while (s.find('<') != string::npos) {
			int count = 1;
			int index = s.find_first_of('<');
			while (s[index - count] == '<') {
				count++;
			}
			s.erase(index - count * 2 + 1, count * 2);
		}
		return s;
	}
};
int main()
{
	string s = "aabbcc<<<dd";
	Solution solution;
	cout << solution.getTextcontent(s) << endl;
	system("pause");
	return 0;
}