#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param A: An integer array
	 * @param index1: the first index
	 * @param index2: the second index
	 * @return: nothing
	 */
	void swapIntegers(vector<int>& A, int index1, int index2) {
		swap(A[index1], A[index2]);
		return;
	}
};
int main()
{
	vector<int>A = { 1,2,3,4 };
	Solution solution;
	solution.swapIntegers(A, 2, 3);
	cout << "[";
	for (int i = 0; i < A.size(); i++) {
		cout << A[i];
		if (i != A.size() - 1) {
			cout << ",";
		}
	}
	cout << "]\n";
	system("pause");
	return 0;
}