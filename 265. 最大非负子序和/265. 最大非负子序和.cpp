#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param A: an integer array
	 * @return: return maxium contiguous non-negative subarray sum
	 */
	int maxNonNegativeSubArray(vector<int>& A) {
		int maxsum = 0;
		int sum = 0;
		bool flag = true;
		for (int i = 0; i < A.size(); i++) {
			if (A[i] < 0) {
				if (sum > maxsum) {
					maxsum = sum;
				}
				sum = 0;
			}
			else {
				flag = false;
				sum += A[i];
				if (i == A.size() - 1 and sum > maxsum) {
					maxsum = sum;
				}
			}
		}
		if (flag) {
			return -1;
		}
		return maxsum;
	}
};
int main()
{
	vector<int> A = {
		1,2,-3,4,5,-6
	};
	Solution solution;
	cout << solution.maxNonNegativeSubArray(A) << endl;
	system("pause");
	return 0;
}