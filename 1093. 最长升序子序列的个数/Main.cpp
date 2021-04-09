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
/// <summary>
/// dp[i] 代表以第 i 个数结尾的最长上升子序列的长度, dp[i] = max(dp[j] + 1) where nums[j] < nums[i];
/// ans[i] 代表以第 i 个数结尾的最长上升子序列的个数, ans[i] += ans[j] where nums[j] < nums[i] && dp[j] == dp[i] - 1;
/// 把dp[i] == max_len对应的ans[i]都加起来就是最终的结果。
/// </summary>
class Solution {
public:
	/**
	 * @param nums: an array
	 * @return: the number of longest increasing subsequence
	 */
	int findNumberOfLIS(vector<int>& nums) {
		int len, max_ans, cnt;
		int dp[2010], ans[2010];
		len = nums.size();
		memset(dp, 0, sizeof(dp));
		memset(ans, 0, sizeof(ans));
		dp[0] = 1;
		max_ans = 1;
		ans[0] = 1;
		for (int i = 1; i < len; i++) {
			dp[i] = 1;
			ans[i] = 1;
			for (int j = 0; j < i; j++) {
				if (nums[j]<nums[i] and dp[j] + 1>dp[i]) {
					dp[i] = dp[j] + 1;
					ans[i] = ans[j];
				}
				else if (nums[j] < nums[i] and dp[j] + 1 == dp[i]) {
					ans[i] += ans[j];
				}
			}
			if (dp[i] > max_ans) {
				max_ans = dp[i];
			}
		}
		cnt = 0;
		for (int i = 0; i < len; i++) {
			if (dp[i] == max_ans) {
				cnt += ans[i];
			}
		}
		return cnt;
	}
};
int main()
{
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}