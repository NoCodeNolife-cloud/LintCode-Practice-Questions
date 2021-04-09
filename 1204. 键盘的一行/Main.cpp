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
	 * @param words: a list of strings
	 * @return: return a list of strings
	 */
	vector<string> findWords(vector<string>& words) {
		string line1 = "qwertyuiop";
		string line2 = "asdfghjkl";
		string line3 = "zxcvbnm";
		vector<string>res;
		for (int i = 0; i < words.size(); i++) {
			bool find = false;
			for (int j = 0; j < words[i].size(); j++) {
				if (line1.find(tolower(words[i][j])) == string::npos) {
					find = true;
					break;
				}
			}
			if (find == false) {
				res.push_back(words[i]);
				continue;
			}
			find = false;
			for (int j = 0; j < words[i].size(); j++) {
				if (line2.find(tolower(words[i][j])) == string::npos) {
					find = true;
					break;
				}
			}
			if (find == false) {
				res.push_back(words[i]);
				continue;
			}
			find = false;
			for (int j = 0; j < words[i].size(); j++) {
				if (line3.find(tolower(words[i][j])) == string::npos) {
					find = true;
					break;
				}
			}
			if (find == false) {
				res.push_back(words[i]);
				continue;
			}
		}
		return res;
	}
};
int main()
{
	vector<string>words = {
		"Hello", "Alaska", "Dad", "Peace"
	};
	Solution solution;
	vector<string>res = solution.findWords(words);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}