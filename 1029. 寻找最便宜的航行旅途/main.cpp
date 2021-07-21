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
    int findCheapestPrice(int n, vector <vector<int>> &flights, int src, int dst, int K) {

        unordered_map<int, vector<int>> outdegrees;

        for (int i = 0; i < flights.size(); ++i) {
            outdegrees[flights[i][0]].push_back(i);
        }

        queue <pair<int, int>> que; //flight and money

        int k = 0, ans = INT_MAX;

        for (int i = 0; i < outdegrees[src].size(); ++i) {
            que.push(make_pair(outdegrees[src][i], 0));
        }

        unordered_map<int, int> memo;

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

        return ans == INT_MAX ? -1 : ans;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
