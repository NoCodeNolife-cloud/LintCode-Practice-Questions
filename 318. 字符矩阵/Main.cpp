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
	 * @return: A string array
	 */
	vector<string> characterGrid(string& A, string& B) {
		string temp(A.size(), '.');
		vector<string>res(B.size(), temp);
		temp.clear();
		int indexA = 0, indexB = 0;
		for (int i = 0; i < A.size(); i++) {
			if (B.find_first_of(A[i]) != string::npos) {
				indexB = B.find_first_of(A[i]);
				indexA = i;
				break;
			}
		}
		for (int i = 0; i < A.size(); i++) {
			res[indexB][i] = A[i];
		}
		for (int i = 0; i < B.size(); i++) {
			res[i][indexA] = B[i];
		}
		return res;
	}
};
int main()
{
	string A = "BANANA";
	string B = "APPLE";
	Solution solution;
	vector<string>res = solution.characterGrid(A, B);
	vector<string>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << *iter << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}