#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    /**
     * @param k: Write your code here
     * @return: the sum of first k even-length palindrome numbers
     */
    int sumKEven(int k) {
        int res = 0;
        for (int i = 0, n = 1; i < k; i++, n++) {
            string temp;
            string temp1;
            temp1 = temp = to_string(n);
            cout << "temp1=" << temp1 << endl;
            cout << "temp2=" << temp << endl;
            reverse(temp1.begin(), temp1.end());
            string temp2 = temp + temp1;
            res += atoi(temp2.c_str());
        }
        return res;
    }
};

int main() {
    Solution solution;
    cout << solution.sumKEven(15) << endl;
    return 0;
}
