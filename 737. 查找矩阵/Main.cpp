#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param Matrix: the input
	 * @return: the element which appears every row
	 */
	int FindElements(vector<vector<int>>& Matrix) {
		map<int, bool>hash;
		for (int j = 0; j < Matrix[0].size(); ++j) {
			hash[Matrix[0][j]] = false;
		}
		for (int i = 1; i < Matrix.size(); ++i) {
			for (int j = 0; j < Matrix[0].size(); ++j) {
				if (hash.find(Matrix[i][j]) == hash.end()) {//not found
					continue;
				}
				else {//find
					hash[Matrix[i][j]] = true;
				}
			}
			map<int, bool>::iterator iter;
			for (iter = hash.begin(); iter != hash.end();) {
				if (iter->second == false) {
					iter = hash.erase(iter);
				}
				else {
					iter->second = false;
					++iter;
				}
			}
			if (hash.size() == 1) {
				return hash.begin()->first;
			}
		}
		return hash.begin()->first;
	}
};
class Solution2 {
public:
	/**
	 * @param Matrix: the input
	 * @return: the element which appears every row
	 */
	int FindElements(vector<vector<int>>& Matrix) {
		int w = Matrix[0].size();
		int l = Matrix.size();
		vector<int>list;
		for (int i = 0; i < w; ++i) {
			list.push_back(Matrix[0][i]);
		}
		for (int i = 1; i < l; ++i) {
			set<int>st;
			for (int j = 0; j < w; ++j) {
				st.insert(Matrix[i][j]);
			}
			for (int j = 0; j < list.size(); ++j) {
				if (st.find(list[j]) == st.end()) {
					list.erase(list.begin() + j);
				}
			}
		}
		return list[0];
	}
};
int main()
{
	Solution solution;
	vector<vector<int>>Matrix =
	{
		{2, 5, 3},
		{3, 2, 1},
		{1, 3, 5}
	};
	cout << solution.FindElements(Matrix);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}