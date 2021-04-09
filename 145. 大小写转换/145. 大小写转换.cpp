#include <iostream>
#include <cctype>
using namespace std;
class Solution {
public:
	/**
	 * @param character: a character
	 * @return: a character
	 */
	char lowercaseToUppercase(char character) {
		character = toupper(character);
		return character;
	}
};
int main()
{
	Solution solution;
	cout << solution.lowercaseToUppercase('f') << endl;
	system("pause");
	return 0;
}