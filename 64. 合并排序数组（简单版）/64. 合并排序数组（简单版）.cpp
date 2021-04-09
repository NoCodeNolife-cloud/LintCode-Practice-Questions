#include <algorithm>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/*
	 * @param A: sorted integer array A which has m elements, but size of A is m+n
	 * @param m: An integer
	 * @param B: sorted integer array B which has n elements
	 * @param n: An integer
	 * @return: nothing
	 */
	void mergeSortedArray(int A[], int m, int B[], int n) {
		for (int i = 0; i < n; i++) {
			A[m + i] = B[i];
		}
		sort(A, A + m + n, less<int>());
		return;
	}
};
int main()
{
	int m = 5, n = 2;
	int* A = new int[5]{ 1, 2, 5 };
	int* B = new int[2]{ 3, 4 };
	Solution solution;
	solution.mergeSortedArray(A, m - n, B, n);
	for (int i = 0; i < 5; i++) {
		cout << setw(2) << left << A[i];
	}
	delete[]A;
	delete[]B;
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}