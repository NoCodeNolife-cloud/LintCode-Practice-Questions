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
	 * @param words: a list of strings
	 * @return: the longest word in words that can be built one character at a time by other words in words
	 */
	string longestWord(vector<string>& words) {
		map<string, bool> hash;//sort by string
		string res = "";
		for (string word : words) {
			hash[word] = false;
			if (word.size() == 1) {
				hash[word] = true;
			}
		}
		for (auto& it : hash) {
			string word = it.first;
			string prefix = word.substr(0, word.size() - 1);
			if (word.size() == 1 or (word.size() > 1 and hash[prefix])) {
				hash[word] = true;
				if (word.size() > res.size()) {
					res = word;//save as the longest word
				}
				else if (word.size() == res.size() and word < res) {
					res = word;//save as less order of directory
				}
			}
		}
		return res;
	}
};
int main()
{
	vector<string>words = {
		"w","wo","wor","worl", "world"
	};
	Solution solution;
	cout << solution.longestWord(words);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}