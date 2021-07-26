#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param n: An integer.
     * @return: Return [minF(n), maxF(n)].
     */
    const int ANS[4] = {0, 1, 1, 0};

    vector<int> minMax(int n) {
        // write your code here.
        vector<int> result;
        result.push_back(ANS[n % 4]);
        result.push_back(n - ANS[(n - 1) % 4]);
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> res = solution.minMax(3);
    for (int item:res) {
        cout << item << endl;
    }
    return 0;
}
