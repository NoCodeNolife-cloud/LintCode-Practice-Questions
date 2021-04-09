#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param n: non-negative integer, n posts
	 * @param k: non-negative integer, k colors
	 * @return: an integer, the total number of ways
	 */
	int numWays(int n, int k) {
		vector<int>dp = { 0,k,k * k,0 };
		if (n <= 2) {
			return dp[n];
		}
		if (k == 1) {
			return 0;
		}
		for (int i = 3; i <= n; ++i) {
			dp[3] = (k - 1) * (dp[1] + dp[2]);
			dp[1] = dp[2];
			dp[2] = dp[3];
		}
		return dp[3];
	}
};
int main()
{
	Solution solution;
	cout << solution.numWays(3, 2) << endl;
	system("pause");
	return 0;
}