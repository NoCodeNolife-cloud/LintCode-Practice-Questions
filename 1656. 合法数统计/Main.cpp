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
bool cmp(int a, int b) {
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}
class Solution {
public:
	/**
	 * @param a: the array a
	 * @param L: the integer L
	 * @param R: the integer R
	 * @return: Return the number of legal integers
	 */
	int getNum(vector<int>& a, int L, int R) {
		sort(a.begin(), a.end(), cmp);
		int res = 0;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] >= L and a[i] <= R) {
				res++;
			}
			else if (a[i] > R) {
				break;
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>a = { 8,5,1,10,5,9 };
	cout << solution.getNum(a, 1, 2);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}