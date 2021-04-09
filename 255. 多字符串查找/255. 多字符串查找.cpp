#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param sourceString: a string
	 * @param targetStrings: a string array
	 * @return: Returns a bool array indicating whether each string in targetStrings is a substring of the sourceString
	 */
	vector<bool> whetherStringsAreSubstrings(string& sourceString, vector<string>& targetStrings) {
		vector<bool>res;
		for (int i = 0; i < targetStrings.size(); i++) {
			if (sourceString.find(targetStrings[i]) != string::npos) {
				res.push_back(true);
			}
			else {
				res.push_back(false);
			}
		}
		return res;
	}
};
int main()
{
	string sourceString = "abc";
	vector<string>targetString = {
		"ab", "cd"
	};
	Solution solution;
	vector<bool>res = solution.whetherStringsAreSubstrings(sourceString, targetString);
	vector<bool>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << *iter << endl;
	}
	system("pause");
	return 0;
}