#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param A: a array
	 * @return: is it monotonous
	 */
	bool isMonotonic(vector<int>& A) {
		bool flag = true;
		for (int i = 1; i < A.size(); i++) {
			if (A[i] >= A[i - 1]) {
				continue;
			}
			else {
				flag = false;
				break;
			}
		}
		if (flag) {
			return true;
		}
		flag = true;
		for (int i = 1; i < A.size(); i++) {
			if (A[i] <= A[i - 1]) {
				continue;
			}
			else {
				flag = false;
				break;
			}
		}
		if (flag) {
			return true;
		}
		return false;
	}
};
int main()
{
	Solution solution;
	vector<int>A = {
		1,2,2,3
	};
	cout << boolalpha << solution.isMonotonic(A);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}