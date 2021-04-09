#include <iostream>
using namespace std;
class Solution {
public:
	/**
	 * @param num1: An integer
	 * @param num2: An integer
	 * @param num3: An integer
	 * @return: an interger
	 */
	int maxOfThreeNumbers(int num1, int num2, int num3) {
		if (num1 >= num2 && num1 >= num3) {
			return num1;
		}
		else if (num2 >= num3) {
			return num2;
		}
		return num3;
	}
};
int main()
{
	Solution solution;
	cout << solution.maxOfThreeNumbers(3, 5, 4) << endl;
	system("pause");
	return 0;
}