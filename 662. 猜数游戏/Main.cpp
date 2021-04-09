#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
	/**
	 * @param n an integer
	 * @return the number you guess
	 */
	int guessNumber(int n) {
		long long left = 0, right = n;
		while (left < right) {
			int middle = (left + right) / 2;
			if (guess(middle) == 0) {
				return middle;
			}
			else if (guess(middle) == 1) {
				left = middle + 1;
			}
			else if (guess(middle) == -1) {
				right = middle - 1;
			}
		}
	}
};
int main()
{
	Solution solution;
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}