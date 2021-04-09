/*
* 递推公式:dp[i][x]=dp[i-1][y]*dp[1][z]
* 其中x=y+z
*/
#include <iostream>
#include <random>
#include <map>
using namespace std;
class Solution {
public:
	/**
	 * @param n an integer
	 * @return a list of pair<sum, probability>
	 */
	vector<pair<int, double>> dicesSum(int n) {
		vector<map<int, double>>dp(n + 1);
		dp[1] = { {1,1 / 6.0},{2,1 / 6.0},{3,1 / 6.0},{4,1 / 6.0},{5,1 / 6.0},{6,1 / 6.0} };
		for (int i = 2; i <= n; i++) {
			for (auto a1 : dp[i - 1]) {
				for (auto a2 : dp[1]) {
					dp[i][a1.first + a2.first] += a1.second * a2.second;
				}
			}
		}
		vector<pair<int, double>>res;
		for (auto a : dp[n]) {
			res.push_back({ a.first,a.second });
		}
		return res;
	}
};
int main() {
	Solution solution;
	system("pause");
	return 0;
}