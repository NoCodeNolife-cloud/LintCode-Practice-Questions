#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	/**
	 * @param x: the wall's height
	 * @return: YES or NO
	 */
	string isBuild(int x) {
		int a = 3;
		int b = 7;
		for (int i = x / b; i >= 0; i--) {
			int temp = x - i * b;
			if (temp % a == 0) {
				return "YES";
			}
		}
		return "NO";
	}
};
int main()
{
	Solution solution;
	cout << solution.isBuild(10) << endl;
	system("pause");
	return 0;
}