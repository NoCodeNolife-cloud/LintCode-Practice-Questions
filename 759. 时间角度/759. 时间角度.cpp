#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param h: hours
	 * @param m: minutes
	 * @return: angle between hour hand and minute hand at X:Y in a clock
	 */
	float timeAngle(int h, int m) {
		h %= 12;
		float res = 30.0 * h - 5.5 * m;
		if (res < 0) {
			res = -res;
		}
		if (res > 180) {
			res = 360 - res;
		}
		return res;
	}
};
int main()
{
	Solution solution;
	cout << solution.timeAngle(2, 57) << endl;
	system("pause");
	return 0;
}