#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
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
	 * @param A: A string
	 * @param B: A string
	 * @return: if string A contains all of the characters in B return true else return false
	 */
	bool compareStrings(string& A, string& B) {
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());
		for (int i = 0; i < B.size(); i++) {
			bool find = false;
			for (int j = 0; j < A.size(); j++) {
				if (A[j] == B[i]) {
					A.erase(A.begin() + j);
					find = true;
					break;
				}
			}
			if (!find) {
				return false;
			}
		}
		return true;
	}
};
int main()
{
	string A = "ABCD";
	string B = "AABC";
	Solution solution;
	cout << boolalpha << solution.compareStrings(A, B);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}