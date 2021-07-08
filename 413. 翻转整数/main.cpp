#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param n: the integer to be reversed
     * @return: the reversed integer
     */
    int reverseInteger(int n) {
        if (n >= 0) {
            long reversevalue = 0;
            while (n != 0) {
                reversevalue *= 10;
                reversevalue += n % 10;
                n /= 10;
            }
            if (reversevalue > INT32_MAX) {
                return 0;
            }
            return int(reversevalue);

        } else {
            n = -n;
            long reversevalue = 0;
            while (n != 0) {
                reversevalue *= 10;
                reversevalue += n % 10;
                n /= 10;
            }
            if (reversevalue > INT32_MAX) {
                return 0;
            }
            return int(-1 * reversevalue);
        }

    }
};

int main() {
    Solution solution;
    cout << solution.reverseInteger(-123) << endl;

    return 0;
}
