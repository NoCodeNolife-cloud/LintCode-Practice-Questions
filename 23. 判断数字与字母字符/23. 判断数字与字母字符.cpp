#include <iostream>
#include <ctype.h>
using namespace std;
class Solution {
public:
	/**
	 * @param c: A character.
	 * @return: The character is alphanumeric or not.
	 */
	bool isAlphanumeric(char c) {
		if (isalpha(c) || isalnum(c)) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main() {
	Solution solution;
	char a = 'A';
	if (solution.isAlphanumeric(a)) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	system("pause");
	return 0;
}