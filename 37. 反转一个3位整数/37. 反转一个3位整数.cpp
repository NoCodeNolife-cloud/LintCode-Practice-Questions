#include <iostream>
using namespace std;
class Solution {
public:
	/**
	 * @param number: A 3-digit number.
	 * @return: Reversed number.
	 */
	int reverseInteger(int number) {
		/*
		* ---
		*/

		//int result = 0;
		//int tempa = number;
		//int tempb;
		//for (int i = 2; i >= 0; i--) {
		//	tempb = tempa % 10;
		//	tempa /= 10;
		//	result += pow(10, i) * tempb;
		//}
		//return result;

		/*
		* ---
		*/
		return number / 100 + ((number / 10) % 10) * 10 + (number % 10) * 100;
	}
};
int main() {
	Solution solution;
	cout << solution.reverseInteger(123) << endl;
	system("pause");
	return 0;
}