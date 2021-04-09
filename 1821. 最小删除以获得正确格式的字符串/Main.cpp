#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param s: the string
	 * @return: Min Deletions To Obtain String in Right Format
	 */
	int minDeletionsToObtainStringInRightFormat(string& s) {
		int rhs = 0, lhs = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'A') {
				++rhs;
			}
		}
		int ans = rhs;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'A') {
				--rhs;
			}
			else {
				++lhs;
			}
			ans = min(ans, rhs + lhs);
		}
		return ans;
	}
};
int main()
{
	string s = "BAAABAB";
	Solution solution;
	cout << solution.minDeletionsToObtainStringInRightFormat(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}