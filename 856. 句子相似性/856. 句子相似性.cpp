#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param words1: a list of string
	 * @param words2: a list of string
	 * @param pairs: a list of string pairs
	 * @return: return a boolean, denote whether two sentences are similar or not
	 */
	bool isSentenceSimilarity(vector<string>& words1, vector<string>& words2, vector<vector<string>>& pairs) {
		if (words1 == words2) {
			return true;
		}
		if (words1.size() != words2.size()) {
			return false;
		}
		int size = words1.size();
		int sizepairs = pairs.size();
		for (int i = 0; i < size; i++) {
			if (words1[i] != words2[i]) {
				bool equal = false;
				for (int j = 0; j < sizepairs; j++) {
					if (pairs[j][0] == words1[i] and pairs[j][1] == words2[i]) {
						equal = true;
						break;
					}
					else if (pairs[j][1] == words1[i] and pairs[j][0] == words2[i]) {
						equal = true;
						break;
					}
				}
				if (!equal) {
					return false;
				}
			}
		}
		return true;
	}
};
int main()
{
	vector<string> words1 = {
		"great", "acting", "skills"
	};
	vector<string> words2 = {
		"fine", "drama", "talent"
	};
	vector<vector<string>> pairs = {
		{"great", "fine"},{"drama", "acting"},{"skills", "talent"}
	};
	Solution solution;
	if (solution.isSentenceSimilarity(words1, words2, pairs)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	system("pause");
	return 0;
}