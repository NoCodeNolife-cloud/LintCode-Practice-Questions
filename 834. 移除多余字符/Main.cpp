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
	stack<int>S;
	int vis[26], num[26];
	/**
	 * @param s: a string
	 * @return: return a string
	 */
	string removeDuplicateLetters(string& s) {
		memset(num, 0, sizeof(num));
		memset(vis, 0, sizeof(vis));
		for (int i = 0; i < s.size(); ++i) {
			num[s[i] - 'a']++;
		}
		for (int i = 0; i < s.size(); ++i) {
			int id = s[i] - 'a';
			num[id]--;
			if (vis[id]) {
				continue;
			}
			while (!S.empty() && S.top() > id && num[S.top()]) {
				vis[S.top()] = 0;
				S.pop();
			}
			S.push(id);
			vis[id] = 1;
		}
		string ans = "";
		while (!S.empty()) {
			ans += char('a' + S.top());
			S.pop();
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
};
int main()
{
	Solution solution;
	string s = "bcabc";
	cout << solution.removeDuplicateLetters(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}