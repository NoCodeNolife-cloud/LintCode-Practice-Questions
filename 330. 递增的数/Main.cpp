#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
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
	 * @param N:  a positive integer N
	 * @return: return a maximum integer less than N, each digit of which must be monotonically increasing.
	 */
	long long getIncreasingNumber(long long N) {
		vector<int>count, res;
		int tempN = N;
		while (tempN != 0) {
			count.push_back(tempN % 10);
			tempN /= 10;
		}
		if (count[count.size() - 1] > 10 - count.size()) {
			for (int i = 0; i < count.size(); i++) {
				res.push_back(10 - count.size() + i);
			}
			long long num = 0;
			for (int i = 0; i < res.size(); i++) {
				num += res[i] * pow(10, res.size() - i - 1);
			}
			return num;
		}
		else {
			reverse(count.begin(), count.end());
			for (int i = 0; i < count.size(); i++) {
				res.push_back(10 - count.size() + i);
			}
			for (int l = count[0]; l >= 0; l--) {
				res[0] = l;
				for (int i = 1; i < count.size(); i++) {
					res[i] = 10 - count.size() + i;
				}
				for (int i = 1; i < count.size(); i++) {
					for (int j = res[i]; j >= res[i - 1] + 1; j--) {
						res[i] = j;
						long long num = 0;
						for (int k = 0; k < res.size(); k++) {
							num += pow(10, res.size() - 1 - k) * res[k];
						}
						if (num < N) {
							return num;
						}
					}
				}
			}
			return 0;
		}
	}
};
int main()
{
	Solution solution;
	cout << solution.getIncreasingNumber(1341);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}