#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param A: an integer array
	 * @return: nothing
	 */
	void sortIntegers(vector<int>& A) {
		for (int i = 0; i < A.size(); i++) {
			for (int j = 0; j < A.size() - i - 1; j++) {
				if (A[j] > A[j + 1])
				{
					swap(A[j], A[j + 1]);
				}
			}
		}
		return;
	}
};
int main()
{
	vector<int>vec = { 3, 2, 1, 4, 5 };
	Solution solution;
	solution.sortIntegers(vec);
	cout << "[";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
		if (i != vec.size() - 1) {
			cout << ",";
		}
	}
	cout << "]\n";
	system("pause");
	return 0;
}