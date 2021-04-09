#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param S: a string
	 * @return: the starting and ending positions of every large group
	 */
	vector<vector<int>> largeGroupPositions(string& S) {
		int count = 1;//equal number
		vector<vector<int>>res;//result
		vector<int>temp;//temparay
		char tempchar = S[0];//initialize
		for (int i = 1; i < S.size(); i++) {
			if (tempchar == S[i]) {//equal
				count++;
			}
			else if (tempchar != S[i]) {//not equal
				if (count > 2) {
					temp.push_back(i - count);
					temp.push_back(i - 1);
					res.push_back(temp);
					temp.clear();
				}
				count = 1;
				tempchar = S[i];
			}
			if (i == S.size() - 1) {
				if (count == S.size() and count > 2) {
					temp.push_back(0);
					temp.push_back(i);
					res.push_back(temp);
				}
				else if (count > 2) {
					temp.push_back(i - count + 1);
					temp.push_back(i);
					res.push_back(temp);
				}
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string s = "aaaa";
	vector<vector<int>>res = solution.largeGroupPositions(s);
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[0].size(); j++) {
			cout << setw(4) << left << res[i][j];
		}
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}