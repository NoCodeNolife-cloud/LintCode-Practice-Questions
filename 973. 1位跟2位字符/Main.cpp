#include <algorithm>
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
	 * @param bits: a array represented by several bits.
	 * @return: whether the last character must be a one-bit character or not
	 */
	bool isOneBitCharacter(vector<int>& bits) {
		int n = bits.size(), i = 0;
		while (i < n - 1) {
			if (bits[i] == 0) {
				i++;
			}
			else {
				i += 2;
			}
		}
		return i == n - 1;
	}
};
int main()
{
	vector<int>bits = {
		1,0,0
	};
	Solution solution;
	cout << boolalpha << solution.isOneBitCharacter(bits);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}