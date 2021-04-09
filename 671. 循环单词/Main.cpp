#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/*
	 * @param words: A list of words
	 * @return: Return how many different rotate words
	 */
	int countRotateWords(vector<string> words) {
		set<string>dict;
		for (string w : words) {
			string s = w + w;
			for (int i = 0; i < w.size(); ++i) {
				dict.erase(s.substr(i, w.size()));
			}
			dict.insert(w);
		}
		return dict.size();
	}
};
int main()
{
	vector<string>words = {
		"picture", "turepic", "icturep", "word", "ordw", "lint"
	};
	Solution solution;
	cout << solution.countRotateWords(words);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}