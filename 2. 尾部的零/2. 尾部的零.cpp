#include <iostream>
using namespace std;

class Solution {
public:
	/*
	 * @param n: A long integer
	 * @return: An integer, denote the number of trailing zeros in n!
	 */
	long long trailingZeros(long long n) {
		long long sum = 0;
		while (n != 0) {
			sum += n / 5;
			n /= 5;
		}
		return sum;
	}
};

int main()
{
	Solution solution;
	cout << "输入: 11" << endl;
	cout << "输出: " << solution.trailingZeros(11) << endl;
	cout << "输入:  105" << endl;
	cout << "输出: " << solution.trailingZeros(105) << endl;
	return 0;
}