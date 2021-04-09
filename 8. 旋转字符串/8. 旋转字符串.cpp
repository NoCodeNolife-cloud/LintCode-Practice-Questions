#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	/**
	 * @param str: An array of char
	 * @param offset: An integer
	 * @return: nothing
	 */
	void rotateString(string& str, int offset) {
		if (str.size() == 0) {
			return;
		}
		offset %= str.size();
		string tempA = str.substr(0, str.size() - offset);
		string tempB = str.substr(str.size() - offset, str.size());
		str = tempB + tempA;
	}
};

int main()
{
	string str = "beautiful";
	Solution solution;
	solution.rotateString(str, 3);
	cout << str;
	return 0;
}