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
	 * @param s: the given string
	 * @return: if a permutation of the string could form a palindrome
	 */
	bool canPermutePalindrome(string& s) {
		map<char, int>hash;
		hash[s[0]] = 1;
		for (int i = 1; i < s.size(); i++) {
			if (hash.find(s[i]) == hash.end()) {
				hash[s[i]] = 1;
			}
			else {
				hash[s[i]]++;
			}
		}
		bool findold = false;
		map<char, int>::iterator iter;
		for (iter = hash.begin(); iter != hash.end(); ++iter) {
			if (iter->second % 2 == 0) {
				continue;
			}
			else {
				if (findold == false) {
					findold = true;
				}
				else {
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
	string s = "code";
	cout << boolalpha << solution.canPermutePalindrome(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}