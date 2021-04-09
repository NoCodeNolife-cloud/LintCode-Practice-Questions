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
	 * @param num: a array
	 * @param target: a num
	 * @return: return all combinations
	 */
	vector<int> combinationSet(vector<int>& num, int target) {
		vector<int>res;
		int index = 0;
		int temptarget = target;
		while (temptarget != 0) {
			++index;
			temptarget /= 10;
		}
		vector<vector<int>>tempint(0, vector<int>(index, 0));
		vector<int>tempvec(index, 0);
		for (int i = 0; i < num.size(); ++i) {
			tempvec[index - 1] = num[i];
			tempint.push_back(tempvec);
		}
		for (int i = index - 2; i >= 0; --i) {
			int tempintsize = tempint.size();
			for (int j = 1; j < num.size(); ++j) {
				for (int k = 0; k < tempintsize; ++k) {
					vector<int>tempvec = tempint[k];
					tempvec[i] = num[j];
					tempint.push_back(tempvec);
				}
			}
		}
		for (int i = 0; i < tempint.size(); ++i) {
			int sum = 0;
			for (int j = index - 1; j >= 0; --j) {
				sum += tempint[i][j] * pow(10, index - 1 - j);
			}
			if (sum < target) {
				res.push_back(sum);
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>num = {
		0,1,2,3
	};
	vector<int>res = solution.combinationSet(num, 30);
	vector<int>::iterator iter;
	for (iter = res.begin(); iter != res.end(); ++iter) {
		cout << setw(3) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}