#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param words: the words given.
	 * @param wordA: the first word you need to find.
	 * @param wordB: the second word you need to find.
	 * @return: return the spacing of the closest wordA and wordB.
	 */
	int wordSpacing(vector<string>& words, string& wordA, string& wordB) {
		int gap = INT_MAX;
		int wordAindex, wordBindex;
		bool havefindA = false, havefindB = false;
		for (int i = 0; i < words.size(); i++) {
			bool find = false;
			if (words[i] == wordA) {
				wordAindex = i;
				find = true;
				havefindA = true;
			}
			else if (words[i] == wordB) {
				wordBindex = i;
				find = true;
				havefindB = true;
			}
			if (find and havefindA and havefindB) {
				int tempgap = abs(wordAindex - wordBindex);
				gap = gap > tempgap ? tempgap : gap;
			}
		}
		if (!havefindA or !havefindB) {
			return -1;
		}
		return gap;
	}
};
int main()
{
	vector<string> words = {
		"hello","world","say","hello"
	};
	string wordA = "hello";
	string wordB = "world";
	Solution solution;
	cout << solution.wordSpacing(words, wordA, wordB) << endl;
	system("pause");
	return 0;
}