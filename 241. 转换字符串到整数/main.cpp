#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param target: A string
     * @return: An integer
     */
    int stringToInteger(string &target) {
        int res = 0;
        if (target[0] == '-') {
            for (int i = 1; i < target.size(); ++i) {
                res = res * 10 + target[i] - '0';
            }
            return -res;
        } else {
            for (int i = 0; i < target.size(); ++i) {
                res = res * 10 + target[i] - '0';
            }
            return res;
        }
    }
};


int main() {
    Solution solution;
    string str = "-15";
    cout << solution.stringToInteger(str);
    return 0;
}
