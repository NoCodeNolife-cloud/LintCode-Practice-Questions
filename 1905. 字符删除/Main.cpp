#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param str: The first string given
	 * @param sub: The given second string
	 * @return: Returns the deleted string
	 */
	string CharacterDeletion(string& str, string& sub) {
		int tmp[256];
		memset(tmp, 0, sizeof(tmp));
		for (char c : sub) {
			tmp[c] = 1;
		}
		string ans = "";
		for (char c : str) {
			if (tmp[c] == 0) {
				ans += c;
			}
		}
		return ans;
	}
};
int main()
{
	Solution solution;
	string str = "They are students";
	string sub = "aeiou";
	cout << solution.CharacterDeletion(str, sub);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}