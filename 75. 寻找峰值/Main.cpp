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
	 * @param A: An integers array.
	 * @return: return any of peek positions.
	 */
	int findPeak(vector<int>& A) {
		int l = 1, r = A.size();
		while (l <= r) {
			int mid = (l + r) / 2;
			if (A[mid] > A[mid - 1] and A[mid] > A[mid + 1]) {
				return mid;
			}
			if (A[mid] > A[mid - 1]) {
				l = mid + 1;
			}
			else {
				r = mid - 1;
			}
		}
		return -1;
	}
};
int main()
{
	Solution solution;
	vector<int>A = { 1,2,1,3,4,5,7,6 };
	cout << solution.findPeak(A);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}