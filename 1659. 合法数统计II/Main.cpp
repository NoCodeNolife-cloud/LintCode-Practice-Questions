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
	 * @param a: the array a
	 * @param q: the queries q
	 * @return: for each query, return the number of legal integers
	 */
	vector<int> getAns(vector<int>& a, vector<vector<int>>& q) {
		vector<int>res;
		sort(a.begin(), a.end(), less<int>());
		for (int i = 0; i < q.size(); i++) {
			int count = 0;
			for (int j = 0; j < a.size(); j++) {
				if (a[j] > q[i][1]) {
					break;
				}
				else if (a[j] >= q[i][0] and a[j] <= q[i][1]) {
					count++;
				}
			}
			res.push_back(count);
		}
		return res;
	}
};
int main()
{
	vector<int>a = { 1,2,3,4,5,6 };
	vector<vector<int>>q = { {1,2},{1,5} };
	Solution solution;
	vector<int>res = solution.getAns(a, q);
	for (int x : res) {
		cout << setw(4) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}