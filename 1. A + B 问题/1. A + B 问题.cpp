#include <iostream>
using namespace std;

class Solution {
public:
	/**
	 * @param a: An integer
	 * @param b: An integer
	 * @return: The sum of a and b
	 */
	int aplusb(int a, int b) {
		return a + b;
	}
};

int main() {
	int a = 1;
	int b = 3;
	Solution solution;
	cout << solution.aplusb(a, b);
	return 0;
}