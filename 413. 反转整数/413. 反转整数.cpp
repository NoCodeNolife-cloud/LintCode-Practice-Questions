#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param n: the integer to be reversed
	 * @return: the reversed integer
	 */
	int reverseInteger(int n) {
		bool sign = true;
		if (n < 0) {
			sign = false;
		}
		n = abs(n);
		vector<int>count;
		while (n != 0) {
			count.push_back(n % 10);
			n /= 10;
		}
		int res = 0;
		for (int i = 0; i < count.size(); i++) {
			if (INT_MAX / pow(10, count.size() - 1 - i) < count[i]) {
				return 0;
			}
			res += count[i] * pow(10, count.size() - 1 - i);
		}
		if (sign == false) {
			res = -res;
		}
		return res;
	}
};
int main()
{
	Solution solution;
	cout << solution.reverseInteger(2147483647) << endl;
	system("pause");
	return 0;
}