#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param n: the nth
	 * @return: the nth sequence
	 */
	string countAndSay(int n) {
		if (n == 1) {
			return "1";
		}
		string s = countAndSay(n - 1);
		return helper(s);
	}
	string helper(string s) {
		string ans;
		if (s.size() == 0) {
			return ans;
		}
		int i = 0;
		while (s[0] == s[i]) {
			i++;
		}
		ans += to_string(i) + to_string(s[0] - '0');
		ans += helper(s.substr(i));
		return ans;
	}
};
int main()
{
	Solution solution;
	cout << solution.countAndSay(5) << endl;
	system("pause");
	return 0;
}