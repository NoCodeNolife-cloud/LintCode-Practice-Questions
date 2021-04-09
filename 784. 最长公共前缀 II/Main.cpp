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
	 * @param dic: the n strings
	 * @param target: the target string
	 * @return: The ans
	 */
	int theLongestCommonPrefix(vector<string>& dic, string& target) {
		vector<int>count(dic.size(), 0);
		for (int i = 0; i < dic.size(); ++i) {
			for (int j = 0; j < dic[i].size() and j < target.size(); ++j) {
				if (dic[i][j] == target[j]) {
					++count[i];
				}
			}
		}
		int res = 0;
		for (int i = 0; i < count.size(); ++i) {
			res = max(count[i], res);
		}
		return res;
	}
};
int main()
{
	vector<string>dic = {
		"abcba","acc","abwsf"
	};
	string target = "abse";
	Solution solution;
	cout << solution.theLongestCommonPrefix(dic, target);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}