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
	 * @param s: a string
	 * @return: reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order
	 */
	string reverseWords(string& s) {
		string res;
		vector<string>count;
		istringstream ss(s);
		string str;
		while (ss >> str) {
			count.push_back(str);
		}
		size_t size = count.size();
		for (int i = 0; i < size; i++) {
			reverse(count[i].begin(), count[i].end());
			res += count[i];
			if (i != size - 1) {
				res += " ";
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string s = "Let's take LeetCode contest";
	cout << solution.reverseWords(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}