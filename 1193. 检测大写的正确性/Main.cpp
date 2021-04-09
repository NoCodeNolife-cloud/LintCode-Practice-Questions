#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param word: a string
	 * @return: return a boolean
	 */
	bool detectCapitalUse(string& word) {
		if (word.size() == 1) {
			return true;
		}
		else {
			if (toupper(word[0]) == word[0]) {//the first is upper
				if (toupper(word[1]) == word[1]) {//the second is upper
					for (int i = 1; i < word.size(); i++) {
						if (toupper(word[i]) != word[i]) {//the next is not upper
							return false;
						}
					}
				}
				else {
					for (int i = 1; i < word.size(); i++) {//the second is lower
						if (toupper(word[i]) == word[i]) {//the next is upper
							return false;
						}
					}
				}
			}
			else {//the first is lower
				for (int i = 1; i < word.size(); i++) {
					if (toupper(word[i]) == word[i]) {//the next is upper
						return false;
					}
				}
			}
		}
		return true;
	}
};
int main()
{
	string word = "usa";
	Solution solution;
	cout << boolalpha << solution.detectCapitalUse(word);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}