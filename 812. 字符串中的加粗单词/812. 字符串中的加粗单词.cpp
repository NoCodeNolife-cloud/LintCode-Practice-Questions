#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param words: the words
	 * @param S: the string
	 * @return: the string with least number of tags
	 */
	string boldWords(vector<string>& words, string& S) {
		vector<bool>state(S.size(), false);
		for (int i = 0; i < words.size(); i++) {
			for (int j = 0; j + words[i].size() <= S.size(); j++) {
				if (S.substr(j, words[i].size()) != words[i]) {
					continue;
				}
				for (int k = 0; k < words[i].size(); k++) {
					state[j + k] = true;
				}
			}
		}
		string res;
		if (state[0]) {
			res += "<b>";
		}
		for (int i = 0; i < S.size(); i++) {
			res.append(1, S[i]);
			if (i == S.size() - 1) {
				break;
			}
			if (!state[i] && state[i + 1]) {
				res += "<b>";
			}
			else if (state[i] && !state[i + 1]) {
				res += "</b>";
			}
		}
		if (state.back()) {
			res += "</b>";
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<string>words = {
		"ab", "bc"
	};
	string S = "aabcd";
	cout << solution.boldWords(words, S) << endl;
	system("pause");
	return 0;
}