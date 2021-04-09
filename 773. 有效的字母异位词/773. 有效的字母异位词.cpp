#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
	/**
	 * @param s: string s
	 * @param t: string t
	 * @return: Given two strings s and t, write a function to determine if t is an anagram of s.
	 */
	bool isAnagram(string& s, string& t) {
		if (s.size() != t.size()) {
			return false;
		}
		sort(s.begin(), s.end(), less<char>());
		sort(t.begin(), t.end(), less<char>());
		if (s == t) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main()
{
	string s = "anagram";
	string t = "nagaram";
	Solution solution;
	if (solution.isAnagram(s, t)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	system("pause");
	return 0;
}