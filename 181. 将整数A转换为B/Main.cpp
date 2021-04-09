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
	 * @param a: An integer
	 * @param b: An integer
	 * @return: An integer
	 */
	int bitSwapRequired(int a, int b) {
		vector<int>binarya(32, 0), binaryb(32, 0);
		if (a >= 0) {
			int i = 0;
			while (a != 0) {
				binarya[i] = a % 2;
				i++;
				a /= 2;
			}
		}
		else {
			a = abs(a);
			int i = 0;
			while (a != 0) {
				binarya[i] = a % 2;
				i++;
				a /= 2;
			}
			for (int j = 0; j < binarya.size(); j++) {
				if (binarya[j] == 0) {
					binarya[j] = 1;
				}
				else {
					binarya[j] = 0;
				}
			}
			for (int k = 0; k < binarya.size(); ++k) {
				if (binarya[k] == 0) {
					binarya[k] = 1;
					break;
				}
				else {
					binarya[k] = 0;
				}
			}
		}
		if (b >= 0) {
			int i = 0;
			while (b != 0) {
				binaryb[i] = b % 2;
				i++;
				b /= 2;
			}
		}
		else {
			b = abs(b);
			int i = 0;
			while (b != 0) {
				binaryb[i] = b % 2;
				i++;
				b /= 2;
			}
			for (int j = 0; j < binaryb.size(); j++) {
				if (binaryb[j] == 0) {
					binaryb[j] = 1;
				}
				else {
					binaryb[j] = 0;
				}
			}
			for (int k = 0; k < binaryb.size(); ++k) {
				if (binaryb[k] == 0) {
					binaryb[k] = 1;
					break;
				}
				else {
					binaryb[k] = 0;
				}
			}
		}
		int res = 0;
		for (int i = 0; i < 32; i++) {
			if (binarya[i] != binaryb[i]) {
				++res;
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	cout << solution.bitSwapRequired(14, 31);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}