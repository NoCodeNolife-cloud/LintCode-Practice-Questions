#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param words: a list of string
	 * @return: a boolean
	 */
	bool validWordSquare(vector<string>& words) {
		int size = words.size();
		int sizet = words[0].size();
		string temp;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				temp.push_back(words[j][i]);
			}
			if (temp != words[i]) {
				return false;
			}
			temp.clear();
		}
		return true;
	}
};
int main()
{
	vector<string>words = { "abcd", "bnrt", "crmy", "dtye" };
	Solution solution;
	if (solution.validWordSquare(words)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	system("pause");
	return 0;
}