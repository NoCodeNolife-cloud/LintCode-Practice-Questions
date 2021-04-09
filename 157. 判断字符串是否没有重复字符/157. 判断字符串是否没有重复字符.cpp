#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	/*
	 * @param str: A string
	 * @return: a boolean
	 */
	bool isUnique(string& str) {
		char ascii[128] = { 0 };
		for (int i = 0; i < str.size(); i++) {
			if (ascii[str[i]] == 0) {
				ascii[str[i]] = 1;
			}
			else {
				return false;
			}
		}
		return true;
	}
};
int main()
{
	string str = "abc___";
	Solution solution;
	if (solution.isUnique(str)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	system("pause");
	return 0;
}