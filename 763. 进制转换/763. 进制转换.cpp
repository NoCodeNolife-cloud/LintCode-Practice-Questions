#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	/**
	 * @param n: a decimal number
	 * @param k: a Integer represent base-k
	 * @return: a base-k number
	 */
	string hexConversion(int n, int k) {
		if (n == 0) {
			return "0";
		}
		string res;
		while (n != 0) {
			int temp = n % k;
			char ch = temp + '0';
			if (temp >= 10) {
				if (temp == 10) {
					ch = 'A';
				}
				else if (temp == 11) {
					ch = 'B';
				}
				else if (temp == 12) {
					ch = 'C';
				}
				else if (temp == 13) {
					ch = 'D';
				}
				else if (temp == 14) {
					ch = 'E';
				}
				else if (temp == 15) {
					ch = 'F';
				}
			}
			res.push_back(ch);
			n /= k;
		}
		reverse(res.begin(), res.end());
		return res;
	}
};
int main()
{
	Solution solution;
	cout << solution.hexConversion(0, 2) << endl;
	system("pause");
	return 0;
}