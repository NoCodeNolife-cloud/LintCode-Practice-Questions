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
	 * @param s: string need to be transformed
	 * @param k: minimum char can be transformed in one operation
	 * @return: minimum times to transform all char into '1'
	 */
	int perfectString(string& s, int k) {
		int res = 0;
		int size = s.size();
		for (int i = 0; i < size; i++) {
			if (s[i] == '0') {
				int j = 1;
				while (s[i + j] == '0' and j < k) {
					j++;
				}
				change(s, i, j);
				res++;
			}
		}
		return res;
	}
	void change(string& s, int m, int k) {
		for (int i = m; i < m + k; i++) {
			if (s[i] == '1') {
				s[i] = '0';
			}
			else {
				s[i] = '1';
			}
		}
		return;
	}
};
int main()
{
	string s = "10101";
	int k = 2;
	Solution solution;
	cout << solution.perfectString(s, k);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}