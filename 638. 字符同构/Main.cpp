#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param t: a string
	 * @return: true if the characters in s can be replaced to get t or false
	 */
	bool isIsomorphic(string& s, string& t) {
		int map1[256];
		int map2[256];
		memset(map1, 0, sizeof(map1));
		memset(map2, 0, sizeof(map2));
		for (int i = 0; i < s.size(); i++) {
			if (map1[s[i]] == 0) {
				map1[s[i]] = t[i];
			}
			else {
				if (map1[s[i]] != t[i]) {
					return false;
				}
			}
		}
		for (int i = 0; i < t.size(); i++) {
			if (map2[t[i]] == 0) {
				map2[t[i]] = s[i];
			}
			else {
				if (map2[t[i]] != s[i]) {
					return false;
				}
			}
		}
		return true;
	}
};
int main()
{
	Solution solution;
	string s = "foo", t = "bar";
	cout << boolalpha << solution.isIsomorphic(s, t);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}