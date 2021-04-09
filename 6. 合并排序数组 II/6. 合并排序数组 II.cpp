#include <iostream>
#include <vector>
#include <time.h>
#include <random>
using namespace std;

class Solution {
public:
	/**
	 * @param A: sorted integer array A
	 * @param B: sorted integer array B
	 * @return: A new sorted integer array
	 */

	vector<int> mergeSortedArray(vector<int>& A, vector<int>& B) {
		if (A.size() > B.size()) {
			return insertSort(A, B);
		}
		else {
			return insertSort(B, A);
		}
	}

	vector<int> insertSort(vector<int>& C, vector<int>& D) {
		int length = C.size() + D.size(), size = C.size();
		int j = 0;
		C.insert(C.end(), D.begin(), D.end());
		for (int i = size; i < length; i++) {
			int temp = C[i];
			for (j = i - 1; j >= 0 && temp < C[j]; j--) {
				C[j + 1] = C[j];
			}
			C[j + 1] = temp;
		}
		for (int x : C) {
			cout << x << " ";
		}
		return C;
	}
};

int main()
{
	vector<int> A = { 1, 2, 3, 4 };
	vector<int>B = { 2,4,5,6 };
	Solution solution;
	solution.mergeSortedArray(A, B);
	return 0;
}