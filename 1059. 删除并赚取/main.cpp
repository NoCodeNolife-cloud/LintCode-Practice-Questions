#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: return a integer
     */
    int deleteAndEarn(vector<int> &nums) {
        vector<int> counters(10001);
        for (int i = 0; i < nums.size(); ++i) {
            counters[nums[i]]++;
        }
        int dp[10001];
        dp[1] = counters[1];
        for (int i = 2; i <= 10000; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + i * counters[i]);
        }
        return dp[10000];
    }
};

int main() {
    Solution solution;
    vector<int>vec={3,4,2};
    cout<<solution.deleteAndEarn(vec);
    return 0;
}
