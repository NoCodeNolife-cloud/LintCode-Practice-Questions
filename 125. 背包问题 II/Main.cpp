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
	 * @param m: An integer m denotes the size of a backpack
	 * @param A: Given n items with size A[i]
	 * @param V: Given n items with value V[i]
	 * @return: The maximum value
	 */
	int backPackII(int m, vector<int>& A, vector<int>& V) {
		vector<int>f(m + 1, 0);
		for (int i = 0; i < A.size(); i++) {
			for (int j = m; j >= A[i]; j--) {
				f[j] = max(f[j], f[j - A[i]] + V[i]);
			}
		}
		return f[m];
	}
};
int main()
{
	vector<int>A = { 2, 3, 5, 7 };
	vector<int>V = { 1, 5, 2, 4 };
	Solution solution;
	cout << solution.backPackII(10, A, V);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}