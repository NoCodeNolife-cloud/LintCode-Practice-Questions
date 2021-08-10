#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param company: Company business
     * @param gym: Gym business
     * @return: Find the shortest rest day
     */
    int minimumRestDays(vector<int> &company, vector<int> &gym) {
        if (company.empty() || (company.size() != gym.size()))
            return -1;

        // dp size: (n, 3)
        // dp[i][0] :work
        // dp[i][1] :exercise
        // dp[i][2] :rest
        vector<vector<int>> dp(2);
        for (vector<vector<int>>::size_type i = 0; i != 2; i++)
            for (vector<int>::size_type j = 0; j != 3; j++)
                dp[i].push_back(INT_MAX);

        if (company[0] == 1) {
            dp[0][0] = 0;
            dp[1][0] = 0;
        }
        if (gym[0] == 1) {
            dp[0][1] = 0;
            dp[1][1] = 0;
        }

        dp[0][2] = 1;
        dp[1][2] = 1;

        for (vector<vector<int>>::size_type i = 1; i != company.size(); i++) {
            for (vector<int>::size_type j = 0; j != 3; j++)
                dp[1][j] = INT_MAX;

            if (company[i] == 1) {
                dp[1][0] = min(dp[0][1], dp[0][2]);
            }
            if (gym[i] == 1) {
                dp[1][1] = min(dp[0][0], dp[0][2]);
            }
            dp[1][2] = min(min(dp[0][0], dp[0][1]), dp[0][2]) + 1;

            for (vector<int>::size_type j = 0; j != 3; j++)
                dp[0][j] = dp[1][j];
        }
        return min(min(dp[1][0], dp[1][1]), dp[1][2]);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
