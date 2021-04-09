#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @return: any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]
	 */
	int peakIndexInMountainArray(vector<int>& A) {
		for (int i = 0; i < A.size(); i++) {
			if (A[i] > A[i + 1]) {
				return i;
			}
		}
	}
};
int main()
{
	vector<int>A = {
		0,1,0
	};
	Solution solution;
	cout << solution.peakIndexInMountainArray(A);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}