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
	 * @param A: an array
	 * @return: the number of arithmetic slices in the array A.
	 */
	int numberOfArithmeticSlices(vector<int>& A) {
		if (A.size() < 3) {
			return 0;
		}
		int res = 0;
		for (int i = 0; i < A.size() - 2; i++) {
			vector<int>count;
			for (int len = 3; len <= A.size() - i; len++) {
				bool find = true;
				int temp = A[i] - A[i + 1];
				for (int j = i + 1; j < i + len - 1; j++) {
					if (temp != A[j] - A[j + 1]) {
						find = false;
						break;
					}
				}
				if (find) {
					res++;
				}
			}
		}
		return res;
	}
};
int main()
{
	vector<int>A = { 1,2,3 };
	Solution solution;
	cout << solution.numberOfArithmeticSlices(A);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}