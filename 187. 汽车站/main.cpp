#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param gas: An array of integers
     * @param cost: An array of integers
     * @return: An integer
     */
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int accum = -1, sum = 0, start = -1, change;
        for (auto i = 0u; i < gas.size(); ++i) {
            sum += change = gas[i] - cost[i];
            if (accum < 0) {
                start = i;
                accum = change;
            } else
                accum += change;
        }
        return sum < 0 ? -1 : start;
    }
};

int main() {
    vector<int> gas = {1, 1, 3, 1};
    vector<int> cost = {2, 2, 1, 1};
    Solution solution;
    cout << solution.canCompleteCircuit(gas, cost);
    return 0;
}
