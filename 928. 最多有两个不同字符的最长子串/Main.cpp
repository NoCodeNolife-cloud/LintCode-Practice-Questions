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
	 * @param s: a string
	 * @return: the length of the longest substring T that contains at most 2 distinct characters
	 */
	int lengthOfLongestSubstringTwoDistinct(string& s) {
		int n = s.size();
		unordered_map<char, int>hash;
		int ans = 0;
		for (int i = 0, j = 0; j < n; ++j) {
			++hash[s[j]];
			while (hash.size() > 2) {
				if (--hash[s[i]] == 0) {
					hash.erase(s[i]);
				}
				++i;
			}
			ans = max(ans, j - i + 1);
		}
		return ans;
	}
};
int main()
{
	string s = { 'e','c','e','b','a' };
	Solution solution;
	cout << solution.lengthOfLongestSubstringTwoDistinct(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}