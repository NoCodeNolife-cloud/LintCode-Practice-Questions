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
	 * @param A: the array
	 * @param K: the length
	 * @return: the largest subarray
	 */
	vector<int> largestSubarray(vector<int>& A, int K) {
		int maxindex = 0;
		for (int i = K, j = 0; i < A.size(); i++, j++) {
			if (A[j + 1] > A[maxindex]) {
				maxindex = j + 1;
			}
			else if (A[j + 1] == A[maxindex]) {
				int index = 0;
				do {
					index++;
					if (A[j + 1 + index] > A[maxindex + index]) {
						maxindex = j + 1;
						break;
					}
					else if (A[j + 1 + index] < A[maxindex + index]) {
						break;
					}
				} while (A[j + 1 + index] != A[maxindex + index]);
			}
		}
		vector<int>res;
		for (int i = 0; i < K; i++) {
			res.push_back(A[maxindex + i]);
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>A = {
		1,4,3,2,5
	};
	vector<int>res = solution.largestSubarray(A, 4);
	for (vector<int>::iterator iter = res.begin(); iter != res.end(); iter++) {
		cout << setw(3) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}