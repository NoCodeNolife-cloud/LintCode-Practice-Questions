#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /*
     * @param : a vector of integers
     * @return: a boolean which equals to true if the first player will win
     */
    bool firstWillWin(vector<int> values) {
        int size = values.size();
        if (size <= 2) {
            return true;
        }
        vector<int> dp(size + 1, 0);
        int sum = 0;
        dp[size - 1] = values[size - 1]; // i=len-1时,只有一个可以拿
        dp[size - 2] = values[size - 1] + values[size - 2]; // i = len-2,有两个可拿，直接拿走
        dp[size - 3] = values[size - 2] + values[size - 3]; // 当i=len-3的时候，剩下最后三个，这时候如果拿一个，对方就会拿走两个，所以这次拿两个
        sum += (values[size - 1] + values[size - 2] + values[size - 3]);
        // 当i = len-4以及以后的情况中，显然可以选择拿一个或者拿两个两种情况，我们自然是选择拿最多的那个作为`dp`的值
        for (int i = size - 4; i >= 0; i--) {
            sum += values[i];
            dp[i] = max(values[i] + min(dp[i + 2], dp[i + 3]),//只拿一个,那么对手可能拿两个或者一个，对手肯定是尽可能多拿，所以我们要选择尽可能小的那个
                        values[i] + values[i + 1] + min(dp[i + 3], dp[i + 4]));//拿两个，同样的情况
        }
        // 由于硬币总数是确定的，我们比较一下先手的硬币dp[0]和后手的硬币数量sum-dp[0]就能得到答案
        return dp[0] > sum - dp[0];
    }
};

int main() {
    Solution solution;
    vector<int> vec = {1, 2, 2};
    cout << boolalpha << solution.firstWillWin(vec);
    return 0;
}
