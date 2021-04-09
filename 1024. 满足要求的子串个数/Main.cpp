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
	 * @param S: a string
	 * @param words: a dictionary of words
	 * @return: the number of words[i] that is a subsequence of S
	 */
	int numMatchingSubseq(string& S, vector<string>& words) {
		int n = S.size();
		vector<vector<int>>nxtPos;
		vector<int>tmp(26, -1);
		for (int i = n - 1; i >= 0; i--) {
			tmp[S[i] - 'a'] = i;
			nxtPos.push_back(tmp);
		}
		reverse(nxtPos.begin(), nxtPos.end());
		int ans = 0;
		for (string& word : words) {
			if (isSubseq(word, nxtPos)) {
				ans++;
			}
		}
		return ans;
	}
	bool isSubseq(string& word, vector<vector<int>>& nxtPos) {
		int lenw = word.size();
		int lens = nxtPos.size();
		int i, j;
		for (i = 0, j = 0; i < lenw and j < lens; i++, j++) {
			j = nxtPos[j][word[i] - 'a'];
			if (j < 0) {
				return 0;
			}
		}
		return i == lenw;
	}
};
int main()
{
	Solution solution;
	string S = "dsahjpjauf";
	vector<string> words = { "ahjpjau", "ja", "ahbwzgqnuk", "tnmlanowax" };
	cout << solution.numMatchingSubseq(S, words);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}