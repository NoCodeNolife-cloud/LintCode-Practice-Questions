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
class WordDictionary {
public:
	map<string, int>hash;
	int lesslen = INT_MAX;
	/*
	 * @param word: Adds a word into the data structure.
	 * @return: nothing
	 */
	void addWord(const string& word) {
		hash[word] = 1;
		lesslen = min(lesslen, int(word.size()));
	}

	/*
	 * @param word: A word could contain the dot character '.' to represent any one letter.
	 * @return: if the word is in the data structure.
	 */
	bool search(const string& word) {
		if (word.size() < lesslen) {
			return false;
		}
		if (hash.find(word) != hash.end()) {
			return true;
		}
		for (map<string, int>::iterator iter = hash.begin(); iter != hash.end(); iter++) {
			bool find = true;
			if (word.size() != (iter->first).size()) {
				continue;
			}
			for (int i = 0; i < word.size(); i++) {
				if (word[i] == '.') {
					continue;
				}
				else if (word[i] != (iter->first)[i]) {
					find = false;
					break;
					if ((iter->first)[0] < word[0]) {
						return false;
					}
				}
			}
			if (find) {
				return true;
			}
		}
		return false;
	}
};
int main()
{
	WordDictionary wor;
	wor.addWord("a");
	wor.addWord("a");
	cout << boolalpha << wor.search(".") << endl;
	cout << boolalpha << wor.search("a") << endl;
	cout << boolalpha << wor.search("aa") << endl;
	cout << boolalpha << wor.search("a") << endl;
	cout << boolalpha << wor.search(".a") << endl;
	cout << boolalpha << wor.search("a.") << endl;
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}