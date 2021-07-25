#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    /**
     * @param n: a integer
     * @param flights: a 2D array
     * @param src: a integer
     * @param dst: a integer
     * @param K: a integer
     * @return: return a integer
     */
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int K) {

        unordered_map<int, vector<int>> outdegrees;
        queue<pair<int, int>> que; //flight and money
        unordered_map<int, int> memo;
        int k = 0, ans = INT_MAX;

        for (int i = 0; i < flights.size(); ++i) {
            outdegrees[flights[i][0]].push_back(i);
        }

        for (int i = 0; i < outdegrees[src].size(); ++i) {
            que.push(make_pair(outdegrees[src][i], 0));
        }

        while (!que.empty() && k <= K) {
            int size = que.size();
            for (int i = 0; i < size; ++i) {
                int curr_f = que.front().first;
                int start = flights[curr_f][0];
                int end = flights[curr_f][1];
                int curr_mon = que.front().second + flights[curr_f][2];
                que.pop();
                if (memo.find(end) == memo.end()) {
                    memo[end] = curr_mon;
                } else {
                    if (memo[end] <= curr_mon) {
                        continue;
                    }
                    memo[end] = curr_mon;
                }
                if (end == dst) {
                    ans = min(ans, curr_mon);
                }
                for (int j = 0; j < outdegrees[end].size(); ++j) {
                    que.push(make_pair(outdegrees[end][j], curr_mon));
                }
            }
            k++;
        }

        return ans == INT_MAX ? -1 : ans;/*如果没有找到合适的线路，返回 -1*/
    }
};

int main() {
    Solution solution;
    vector<vector<int>> flights = {
            {0, 1, 100},
            {1, 2, 100},
            {0, 2, 500}
    };
    cout << solution.findCheapestPrice(3, flights, 0, 2, 0);
    return 0;
}
