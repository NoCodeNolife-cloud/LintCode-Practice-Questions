#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param s: a string
     * @return: whether the student could be rewarded according to his attendance record
     */
    bool checkRecord(string &s) {
        int cntA = 0;
        int cntL = 0;
        for (char i : s) {
            if (i == 'A') {
                ++cntA;
                cntL = 0;
            } else if (i == 'L') {
                ++cntL;
                if (cntL > 2) {
                    return false;
                }
            } else {
                cntL = 0;
            }
        }
        if (cntA > 1) {
            return false;
        }
        return true;
    }
};

int main() {
    Solution solution;
    string s = "LALL";
    cout << boolalpha << solution.checkRecord(s);
    return 0;
}
