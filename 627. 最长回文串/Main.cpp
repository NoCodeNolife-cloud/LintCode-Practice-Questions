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
	 * @param s: a string which consists of lowercase or uppercase letters
	 * @return: the length of the longest palindromes that can be built
	 */
	int longestPalindrome(string& s) {
		vector<pair<char, int>>count;
		if (s.size() == 0) {
			return 0;
		}
		else if (s.size() == 1) {
			return 1;
		}
		else {
			pair<char, int>temp;
			temp.first = s[0];
			temp.second = 1;
			count.push_back(temp);
			for (int i = 1; i < s.size(); i++) {
				bool find = false;
				for (int j = 0; j < count.size(); j++) {
					if (count[j].first == s[i]) {
						find = true;
						count[j].second++;
						break;
					}
				}
				if (!find) {
					temp.first = s[i];
					temp.second = 1;
					count.push_back(temp);
				}
			}
			if (count.size() == 1) {
				return count[0].second;
			}
			int res = 0;
			for (int i = 0; i < count.size(); i++) {
				if (count[i].second % 2 == 0) {
					res += count[i].second;
				}
				else {
					res += count[i].second - 1;
				}
			}
			return res + 1;
		}
	}
};
class Solution2 {
public:
	/**
	 * @param s: a string which consists of lowercase or uppercase letters
	 * @return: the length of the longest palindromes that can be built
	 */
	int longestPalindrome(string& s) {
		vector<pair<char, int>>count;
		if (s.size() == 0) {
			return 0;
		}
		else if (s.size() == 1) {
			return 1;
		}
		else {
			pair<char, int>temp;
			temp.first = s[0];
			temp.second = 1;
			count.push_back(temp);
			for (int i = 1; i < s.size(); i++) {
				bool find = false;
				for (int j = 0; j < count.size(); j++) {
					if (count[j].first == s[i]) {
						find = true;
						count[j].second++;
						break;
					}
				}
				if (!find) {
					temp.first = s[i];
					temp.second = 1;
					count.push_back(temp);
				}
			}
			if (count.size() == 1) {
				return count[0].second;
			}
			int res = 0;
			bool find = false;
			for (int i = 0; i < count.size(); i++) {
				if (count[i].second % 2 == 0) {
					res += count[i].second;
				}
				else {
					res += count[i].second - 1;
					if (find == false) {
						find = true;
						res++;
					}
				}
			}
			return res;
		}
	}
};
int main()
{
	Solution solution;
	string s = "abccccdd";
	cout << solution.longestPalindrome(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}