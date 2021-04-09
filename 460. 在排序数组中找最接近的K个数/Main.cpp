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
	 * @param target: An integer
	 * @param k: An integer
	 * @return: an integer array
	 */
	vector<int> kClosestNumbers(vector<int>& A, int target, int k) {
		quickSort(A, 0, A.size() - 1, target);
		for (int i = 0; i < A.size() - 1; i++) {
			if (abs(A[i] - target) == abs(A[i + 1] - target) and A[i] > A[i + 1]) {
				swap(A[i], A[i + 1]);
			}
		}
		vector<int>res(A.begin(), A.begin() + k);
		return res;
	}
	void quickSort(vector<int>& A, int left, int right, int target) {
		int tleft = left, tright = right;
		int middle = A[(left + right) / 2];
		while (tleft <= tright) {
			while (abs(A[tleft] - target) < abs(middle - target)) {
				tleft++;
			}
			while (abs(middle - target) < abs(A[tright] - target)) {
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
		if (tleft < right) {
			quickSort(A, tright + 1, right, target);
		}
		if (left < tright) {
			quickSort(A, left, tleft - 1, target);
		}
	}
};
int main()
{
	vector<int>A = { 1,4,6,8 };
	Solution solution;
	vector<int>res = solution.kClosestNumbers(A, 3, 3);
	for (int x : res) {
		cout << setw(4) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}