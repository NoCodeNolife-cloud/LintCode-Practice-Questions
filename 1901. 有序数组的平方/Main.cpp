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
	/**
	 * @param A: The array A.
	 * @return: The array of the squares.
	 */
	vector<int> SquareArray(vector<int>& A) {
		vector<int>B = A;
		for (int i = 0; i < B.size(); i++) {
			B[i] = B[i] * B[i];
		}
		sort(B.begin(), B.end(), less<int>());
		return B;
	}
};
int main()
{
	Solution solution;
	vector<int>A = { -4,-1,0,3,10 };
	vector<int>B = solution.SquareArray(A);
	vector<int>::iterator iter;
	for (iter = B.begin(); iter != B.end(); iter++) {
		cout << setw(4) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}