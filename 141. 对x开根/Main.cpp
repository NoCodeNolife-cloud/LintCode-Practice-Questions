#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param x: An integer
	 * @return: The sqrt of x
	 */
	int sqrt(int x) {
		long long res = 1 + x / 2, del = res;
		for (; abs(del = res * res - x) >= res * 2; res -= del / 2 / res);
		return del > 0 ? --res : res;
	}
};
int main()
{
	Solution solution;
	cout << solution.sqrt(16);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}