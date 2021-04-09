#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param digits: a number represented as an array of digits
	 * @return: the result
	 */
	vector<int> plusOne(vector<int>& digits) {
		vector<int>res = digits;
		int carry = 1;
		for (int i = res.size() - 1;; i--) {
			res[i]++;
			if (res[i] == 10) {
				if (i == 0) {
					res[i] = 0;
					res.insert(res.begin(), 1);
					return res;
				}
				carry = 1;
				res[i] = 0;
			}
			else {
				return res;
			}
		}
	}
};
class Solution2 {
public:
	/**
	 * @param digits: a number represented as an array of digits
	 * @return: the result
	 */
	vector<int> plusOne(vector<int>& digits) {
		vector<int>res = digits;
		int carry = 1;
		for (int i = res.size() - 1; i >= 0; i--) {
			res[i]++;
			if (res[i] == 10) {
				carry = 1;
				res[i] = 0;
			}
			else {
				return res;
			}
		}
		res.insert(res.begin(), 1);
		return res;
	}
};

int main()
{
	vector<int> digits = {
		9,9,9
	};
	Solution solution;
	vector<int>res = solution.plusOne(digits);
	for (int x : res) {
		cout << x;
	}
	system("pause");
	return 0;
}