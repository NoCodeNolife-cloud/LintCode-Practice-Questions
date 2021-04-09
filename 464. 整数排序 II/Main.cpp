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
	 * @param A: an integer array
	 * @return: nothing
	 */
	void sortIntegers2(vector<int>& A) {
		if (A.size() == 0) {
			return;
		}
		quickSort(A, 0, A.size() - 1);
	}
	void quickSort(vector<int>& A, int left, int right) {
		int middle = A[(left + right) / 2];
		int tleft = left, tright = right;
		while (tleft <= tright) {
			while (A[tleft] < middle) {
				tleft++;
			}
			while (middle < A[tright]) {
				tright--;
			}
			if (tleft <= tright) {
				swap(A[tleft], A[tright]);
				tleft++;
				tright--;
			}
		}
		if (tleft == tright) {
			tleft++;
		}
		if (left < tright) {
			quickSort(A, left, tleft - 1);
		}
		if (tleft < right) {
			quickSort(A, tright + 1, right);
		}
	}
};
int main()
{
	vector<int>vec = { 3,2,1,4,5 };
	Solution solution;
	solution.sortIntegers2(vec);
	for (int x : vec) {
		cout << setw(4) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}