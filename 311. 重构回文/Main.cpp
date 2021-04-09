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
	 * @param s: A string containing only uppercase and lowercase letters
	 * @return: Judge whether it can become a palindrome
	 */
	bool isPalindrome(string& s) {
		vector<pair<char, int>>count;
		if (s.size() == 1) {
			return true;
		}
		else {
			pair<char, int>temp;
			temp.first = s[0];
			temp.second = 1;
			count.push_back(temp);
			int ssize = s.size();
			for (int i = 1; i < ssize; ++i) {
				bool find = false;
				int countsize = count.size();
				for (int j = 0; j < countsize; ++j) {
					if (count[j].first == s[i]) {
						count[j].second++;
						find = true;
						break;
					}
				}
				if (!find) {
					temp.first = s[i];
					temp.second = 1;
					count.push_back(temp);
				}
			}
		}
		bool findold = false;
		int countsize = count.size();
		for (int i = 0; i < countsize; ++i) {
			if (count[i].second % 2 == 0) {
				continue;
			}
			else if (count[i].second % 2 == 1 and findold == false) {
				findold = true;
			}
			else if (count[i].second % 2 == 1 and findold == true) {
				return false;
			}
		}
		return true;
	}
};
int main()
{
	string str = "jemacgCvjRjemacgCvjR";
	Solution solution;
	cout << boolalpha << solution.isPalindrome(str);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}