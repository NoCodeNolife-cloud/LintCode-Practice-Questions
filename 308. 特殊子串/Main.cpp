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
	 * @param str: a string for calculating.
	 * @param k: the length of special substring.
	 * @return: return the number of special substrings.
	 */
	int specialSubstringCount(string& str, int k) {
		vector<string>count;
		for (int i = 0; i <= str.size() - k; i++) {
			string temp = str.substr(i, k);
			count.push_back(temp);
		}
		int res = 0;
		for (int i = 0; i < count.size(); i++) {
			vector<int>num(26, 0);
			bool find = true;
			bool findone = false;
			for (int j = 0; j < count[i].size(); j++) {
				num[count[i][j] - 'a']++;
				if (num[count[i][j] - 'a'] == 2 and findone == false) {
					findone = true;
				}
				else if (num[count[i][j] - 'a'] >= 2 and findone == true) {
					find = false;
					break;
				}
			}
			if (find) {
				res++;
			}
		}
		return res;
	}
};
int main()
{
	string res = "helloo";
	Solution solution;
	cout << solution.specialSubstringCount(res, 4);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}