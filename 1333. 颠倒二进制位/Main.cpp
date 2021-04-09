#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param n: an integer
	 * @return: return an integer
	 */
	long long reverseBits(long long n) {
		vector<int>count(32, 0);
		int i = 31;
		while (n != 0) {
			count[i] = n % 2;
			i--;
			n /= 2;
		}
		long long res = 0;
		for (int i = 0; i < count.size(); i++) {
			res += count[i] * pow(2, i);
		}
		return res;
	}
};
int main()
{
	Solution solution;
	cout << solution.reverseBits(10);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}