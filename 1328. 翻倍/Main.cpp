#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param A: an Integer
	 * @param B: an Integer
	 * @param p: an Integer
	 * @param q: an Integer
	 * @return: Return the minimum time
	 */
	int DoubleChange(int A, int B, int p, int q) {
		int times = 0;//result
		long long res = A, pchange = p;//temp p
		while (res < B) {
			if ((res + pchange) >= B) {
				res += pchange;
			}
			else {
				pchange = pchange * q;
			}
			times++;
		}
		return times;
	}
};
int main()
{
	Solution solution;
	cout << solution.DoubleChange(2, 10, 1, 2);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}