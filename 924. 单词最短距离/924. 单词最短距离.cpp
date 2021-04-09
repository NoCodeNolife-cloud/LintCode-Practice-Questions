#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param words: a list of words
	 * @param word1: a string
	 * @param word2: a string
	 * @return: the shortest distance between word1 and word2 in the list
	 */
	int shortestDistance(vector<string>& words, string& word1, string& word2) {
		int gap = INT_MAX;
		int word1index = 0, word2index = 0;
		bool findword1 = false, findword2 = false;
		for (int i = 0; i < words.size(); i++) {
			if (words[i] == word1) {
				word1index = i;
				findword1 = true;
				if (gap > abs(word1index - word2index) and findword1 and findword2) {
					gap = abs(word1index - word2index);
				}
			}
			if (words[i] == word2) {
				word2index = i;
				findword2 = true;
				if (gap > abs(word1index - word2index) and findword1 and findword2) {
					gap = abs(word1index - word2index);
				}
			}
		}
		return gap;
	}
};
int main()
{
	vector<string> words = {
		"practice", "makes", "perfect", "coding", "makes"
	};
	string word1 = "makes";
	string word2 = "practice";
	Solution solution;
	cout << solution.shortestDistance(words, word1, word2) << endl;
	system("pause");
	return 0;
}