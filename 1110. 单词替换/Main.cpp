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
	 * @param dict: List[str]
	 * @param sentence: a string
	 * @return: return a string
	 */
	string replaceWords(vector<string>& dict, string& sentence) {
		vector<string>count;
		istringstream ss(sentence);
		string str;
		while (ss >> str) {
			count.push_back(str);
		}
		for (int i = 0; i < count.size(); i++) {
			for (int j = 0; j < dict.size(); j++) {
				bool ishead = true;
				for (int k = 0; k < dict[j].size(); k++) {
					if (dict[j][k] != count[i][k]) {
						ishead = false;
						break;
					}
				}
				if (ishead) {
					count[i] = dict[j];
				}
			}
		}
		string res;
		for (int i = 0; i < count.size(); i++) {
			res += count[i];
			if (i != count.size() - 1) {
				res += ' ';
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<string> dict = {
		"cat", "bat", "rat"
	};
	string sentence = "the cattle was rattled by the battery";
	cout << solution.replaceWords(dict, sentence);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}