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
	 * @param s: a string
	 * @return: reverse only the vowels of a string
	 */
	string reverseVowels(string& s) {
		vector<int>count;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') {
				count.push_back(i);
			}
			else if (s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U') {
				count.push_back(i);
			}
		}
		for (int i = 0, j = count.size() - 1; i <= j; i++, j--) {
			swap(s[count[i]], s[count[j]]);
		}
		return s;
	}
};
int main()
{
	Solution solution;
	string s = "hello";
	cout << solution.reverseVowels(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}