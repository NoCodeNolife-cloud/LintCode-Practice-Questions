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
	 * @param S: a string
	 * @param K: a integer
	 * @return: return a string
	 */
	string licenseKeyFormatting(string& S, int K) {
		string res, temp;
		for (int i = S.size(); i >= 0; --i) {
			if (isdigit(S[i])) {
				temp.push_back(S[i]);
			}
			else if (isalpha(S[i])) {
				temp.push_back(toupper(S[i]));//to upper
			}
			if (temp.size() == K) {
				res += temp;
				if (i != 0) {
					res += '-';
				}
				temp.clear();
			}
			if (i == 0) {
				res += temp;
			}
		}
		reverse(res.begin(), res.end());
		return res;
	}
};
int main()
{
	string S = "5F3Z-2e-9-w";
	int K = 1;
	Solution solution;
	cout << solution.licenseKeyFormatting(S, K);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}