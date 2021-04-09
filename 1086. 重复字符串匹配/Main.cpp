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
	 * @param A: a string
	 * @param B: a string
	 * @return: return an integer
	 */
	int repeatedStringMatch(string& A, string& B) {
		string temp;
		if (B.find(A) != string::npos) {
			for (int i = 1; 1; i++) {
				temp += A;
				if (temp.find(B) != string::npos) {
					return i;
				}
			}
		}
		else {
			for (int i = 1; i < 3; i++) {
				temp += A;
				if (temp.find(B) != string::npos) {
					return i;
				}
			}
			return -1;
			for (int i = 3; 1; i++) {
				temp += A;
				if (temp.find(B) != string::npos) {
					return i;
				}
			}
		}
	}
}; int main()
{
	Solution solution;
	string A = "a", B = "b";
	cout << solution.repeatedStringMatch(A, B);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}