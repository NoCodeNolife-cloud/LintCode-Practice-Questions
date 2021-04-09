#include <iostream>
using namespace std;

class Solution {
public:
	/**
	 * @param k: An integer
	 * @param n: An integer
	 * @return: An integer denote the count of digit k in 1..n
	 */
	int digitCounts(int k, int n) {
		int count = 0;
		if (k == 0) {
			count = 1;
		}
		for (int i = 1; i <= n; i++) {
			int number = i;
			while (number > 0) {
				if (number % 10 == k) {
					count++;
				}
				number /= 10;
			}
		}
		return count;
	}
};

int main()
{
	Solution solution;
	cout << solution.digitCounts(1, 12);
	return 0;
}