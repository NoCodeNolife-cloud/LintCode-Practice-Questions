#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param word: a non-empty string
	 * @param abbr: an abbreviation
	 * @return: true if string matches with the given abbr or false
	 */
	bool validWordAbbreviation(string& word, string& abbr) {
		if (abbr[0] == '0' or abbr[abbr.size() - 1] == '0') {
			return false;
		}
		string temp;
		vector<int> count;
		for (int i = 0; i < abbr.size(); i++) {
			if (isalpha(abbr[i])) {
				if (count.size() != 0) {
					int carry = 0;
					reverse(count.begin(), count.end());
					for (int j = 0; j < count.size(); j++) {
						carry += count[j] * pow(10, j);
					}
					count.clear();
					for (int j = 0; j < carry; j++) {
						temp.push_back(' ');
					}
				}
				temp.push_back(abbr[i]);
			}
			else {
				int integer = abbr[i] - '0';
				count.push_back(integer);
				if (i == abbr.size() - 1) {
					int carry = 0;
					reverse(count.begin(), count.end());
					for (int j = 0; j < count.size(); j++) {
						carry += count[j] * pow(10, j);
					}
					count.clear();
					for (int j = 0; j < carry; j++) {
						temp.push_back(' ');
					}
				}
			}
		}
		if (temp.size() != word.size()) {
			return false;
		}
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] != ' ' and temp[i] != word[i]) {
				return false;
			}
		}
		return true;
	}
};
int main()
{
	Solution solution;
	string s = "a", abbr = "01";
	if (solution.validWordAbbreviation(s, abbr)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	system("pause");
	return 0;
}