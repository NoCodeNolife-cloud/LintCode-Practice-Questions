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
	 * @param A: An array of Integer
	 * @return: an integer
	 */
	int longestIncreasingContinuousSubsequence(vector<int>& A) {
		int res = 1;
		if (A.size() == 1) {
			return res;
		}
		else if (A.size() == 0) {
			return 0;
		}
		int temp = 1;
		for (int i = 1; i < A.size(); i++) {
			if (A[i] > A[i - 1]) {
				temp++;
			}
			else {
				if (temp > res) {
					res = temp;
				}
				temp = 1;
			}
			if (i == A.size() - 1 and temp > res) {
				res = temp;
			}
		}
		temp = 1;
		for (int i = A.size() - 2; i >= 0; i--) {
			if (A[i] > A[i + 1]) {
				temp++;
			}
			else {
				if (temp > res) {
					res = temp;
				}
				temp = 1;
			}
			if (i == 0 and temp > res) {
				res = temp;
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>A = { 5,4,2,1,3 };
	cout << solution.longestIncreasingContinuousSubsequence(A);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}