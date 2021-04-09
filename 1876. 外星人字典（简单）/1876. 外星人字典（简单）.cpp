#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param words: the array of string means the list of words
	 * @param order: a string indicate the order of letters
	 * @return: return true or false
	 */
	bool isAlienSorted(vector<string>& words, string& order) {
		if (words.size() == 1) {
			return true;
		}
		for (int i = 0; i < words.size() - 1; i++) {
			for (int j = 0; j < words[i].size() and j < words[i + 1].size(); ) {
				if (words[i][j] == words[i + 1][j]) {
					j++;
					if (j == words[i].size() or j == words[i + 1].size()) {
						if (words[i].size() > words[i + 1].size()) {
							return false;
						}
					}
				}
				else if (order.find(words[i][j]) > order.find(words[i + 1][j])) {
					return false;
				}
				else {
					break;
				}
			}
		}
		return true;
	}
};
int main()
{
	vector<string> words = {
		"apple","app"
	};
	string order = "abcdefghijklmnopqrstuvwxyz";
	Solution solution;
	if (solution.isAlienSorted(words, order)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	system("pause");
	return 0;
}