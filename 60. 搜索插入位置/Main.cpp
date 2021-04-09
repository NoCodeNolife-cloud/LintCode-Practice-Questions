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
	 * @param A: an integer sorted array
	 * @param target: an integer to be inserted
	 * @return: An integer
	 */
	int searchInsert(vector<int>& A, int target) {
		if (A.size() == 0) {
			return 0;
		}
		for (int i = 0; i < A.size(); i++) {
			if (A[i] >= target) {
				return i;
			}
		}
		return A.size();
	}
};
int main()
{
	Solution solution;
	vector<int>A = {
		1,3,5,6
	};
	cout << solution.searchInsert(A, 5);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}