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
	 * @param A: lists A
	 * @param B: lists B
	 * @return: the index mapping
	 */
	vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
		vector<int>res;
		unordered_map<int, int>m;
		for (int i = 0; i < A.size(); ++i) {
			m[B[i]] = i;
		}
		for (int i = 0; i < A.size(); ++i) {
			res.push_back(m[A[i]]);
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>A = {
		12, 28, 46, 32, 50
	};
	vector<int>B = {
		50, 12, 32, 46, 28
	};
	vector<int>res = solution.anagramMappings(A, B);
	for (vector<int>::iterator iter = res.begin(); iter != res.end(); iter++) {
		cout << setw(5) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}