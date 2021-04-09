#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
	/**
	 * @param a: a number
	 * @param b: a number
	 * @return: the result
	 */
	string addBinary(string& a, string& b) {
		const size_t n = a.size() > b.size() ? a.size() : b.size();
		string result;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		int carry = 0;
		for (size_t i = 0; i < n; i++) {
			const int ai = i < a.size() ? a[i] - '0' : 0;
			const int bi = i < b.size() ? b[i] - '0' : 0;
			const int val = (ai + bi + carry) % 2;
			carry = (ai + bi + carry) / 2;
			result.insert(result.begin(), val + '0');
		}
		if (carry == 1) {
			result.insert(result.begin(), '1');
		}
		return result;
	}
};
int main()
{
	string a = "0";
	string b = "0";
	Solution solution;
	cout << solution.addBinary(a, b) << endl;
	system("pause");
	return 0;
}