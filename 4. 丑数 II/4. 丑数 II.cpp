#include <iostream>
using namespace std;

class Solution {
public:
	/**
	 * @param n: An integer
	 * @return: return a  integer as description.
	 */
	int nthUglyNumber(int n) {
		int* uglys = new int[n];
		uglys[0] = 1;
		int next = 1;
		int* p2 = uglys;
		int* p3 = uglys;
		int* p5 = uglys;
		while (next < n) {
			int m = min(min(*p2 * 2, *p3 * 3), *p5 * 5);
			uglys[next] = m;
			while (*p2 * 2 <= uglys[next]) {
				*p2++;
			}
			while (*p3 * 3 <= uglys[next]) {
				*p3++;
			}
			while (*p5 * 5 <= uglys[next]) {
				*p5++;
			}
			next++;
		}
		int uglyNum = uglys[n - 1];
		delete[]uglys;
		return uglyNum;
	}
};

int main()
{
	Solution solution;
	cout << solution.nthUglyNumber(1052) << endl;
	return 0;
}