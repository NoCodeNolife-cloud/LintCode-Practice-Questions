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
	 * @param s1: a string
	 * @param s2: a string
	 * @return: if s2 contains the permutation of s1
	 */
	bool checkInclusion(string& s1, string& s2) {
		map<char, int>hash1;
		for (int i = 0; i < s1.size(); i++) {
			if (hash1.find(s1[i]) == hash1.end()) {
				hash1[s1[i]] = 1;
			}
			else {
				hash1[s1[i]]++;
			}
		}
		for (int i = 0; i < s2.size() - s1.size(); i++) {
			map<char, int> hash2;
			for (int k = i; k < i + s1.size(); k++) {
				if (hash2.find(s2[k]) == hash2.end()) {
					hash2[s2[k]] = 1;
				}
				else {
					hash2[s2[k]]++;
				}
			}
			bool allequal = true;
			for (map<char, int>::iterator iter = hash1.begin(); iter != hash1.end(); iter++) {
				if (hash2[iter->first] != iter->second) {
					allequal = false;
					break;
				}
			}
			for (map<char, int>::iterator iter = hash2.begin(); iter != hash2.end(); iter++) {
				if (hash1[iter->first] != iter->second) {
					allequal = false;
					break;
				}
			}
			if (allequal) {
				return true;
			}
		}
		return false;
	}
};
class Solution2 {
public:
	/**
	 * @param s1: a string
	 * @param s2: a string
	 * @return: if s2 contains the permutation of s1
	 */
	int allZero(int* count) {
		for (int i = 0; i < 26; i++) {
			if (count[i] != 0) {
				return 0;
			}
		}
		return 1;
	}
	int count[26];
	bool checkInclusion(string& s1, string& s2) {
		int len1 = s1.length(), len2 = s2.length();
		if (len1 > len2) {
			return false;
		}
		for (int i = 0; i < 26; i++) {
			count[i] = 0;
		}
		for (int i = 0; i < len1; i++) {
			count[s1[i] - 'a']++;
			count[s2[i] - 'a']--;
		}
		if (allZero(count)) {
			return true;
		}
		for (int i = len1; i < len2; i++) {
			count[s2[i] - 'a']--;
			count[s2[i - len1] - 'a']++;
			if (allZero(count) == 1) {
				return true;
			}
		}
		return false;
	}
};
int main()
{
	string s1 = "ab", s2 = "eidbaooo";
	Solution2 solution;
	cout << boolalpha << solution.checkInclusion(s1, s2);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}