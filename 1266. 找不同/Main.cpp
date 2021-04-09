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
	 * @param s: a string
	 * @param t: a string
	 * @return: the letter that was added in t
	 */
	char findTheDifference(string& s, string& t) {
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		int sizet = t.size(), sizes = s.size();
		int i = 0;
		for (; s[i] == t[i] and i < sizet and i < sizes; i++);
		if (s.size() > t.size()) {
			return s[i];
		}
		else {
			return t[i];
		}
	}
};
int main()
{
	Solution solution;
	string s = "abcd", t = "eabcd";
	cout << solution.findTheDifference(s, t);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}