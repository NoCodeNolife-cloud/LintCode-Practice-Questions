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
	 * @param A: a string
	 * @param B: a string
	 * @return: return the sum of two strings
	 */
	string SumofTwoStrings(string& A, string& B) {
		string res;
		int m = A.size();
		int n = B.size();
		for (int i = m - 1, j = n - 1; i >= 0 or j >= 0; i--, j--) {
			int tempA, tempB;
			if (i >= 0) {
				tempA = A[i] - '0';
			}
			else {
				tempA = 0;
			}
			if (j >= 0) {
				tempB = B[j] - '0';
			}
			else {
				tempB = 0;
			}
			string temp = to_string(tempA + tempB);
			temp += res;
			res = temp;
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string A = "99";
	string B = "111";
	cout << solution.SumofTwoStrings(A, B);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}