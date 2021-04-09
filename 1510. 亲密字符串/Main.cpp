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
	 * @param A: string A
	 * @param B: string B
	 * @return: bool
	 */
	bool buddyStrings(string& A, string& B) {
		if (A.size() != B.size()) {
			return false;
		}
		else if (A == B) {
			map<char, bool>hash;
			for (int i = 0; i < A.size(); i++) {
				if (hash.find(A[i]) == hash.end()) {
					hash[A[i]] = true;
				}
				else {
					return true;
				}
			}
			return false;
		}
		int notequal_1 = 0, notequal_2 = 0;
		for (int i = 0; i < A.size(); i++) {
			if (A[i] == B[i]) {
				continue;
			}
			else if (notequal_1 == 0) {
				notequal_1 = i;
			}
			else if (notequal_2 == 0) {
				notequal_2 = i;
			}
			else if (notequal_1 != 0 and notequal_2 != 0) {
				return false;
			}
		}
		if (A[notequal_1] == B[notequal_2] and A[notequal_2] == B[notequal_1]) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main()
{
	string A = "abcabc", B = "abcabc";
	Solution solution;
	cout << boolalpha << solution.buddyStrings(A, B);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}