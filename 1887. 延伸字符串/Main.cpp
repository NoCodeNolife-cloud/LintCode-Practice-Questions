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
	 * @param S: the string
	 * @return: The numbers of strings
	 */
	long long stretchWord(string& S) {
		long long res = 0;
		char temp = S[0];
		long long num = 1;
		long long count = 0;
		for (int i = 1; i < S.size(); i++) {
			if (temp == S[i]) {
				num++;
			}
			else {
				if (num >= 2) {
					count++;
				}
				temp = S[i];
				num = 1;
			}
			if (i == S.size() - 1 and num >= 2) {
				count++;
			}
		}
		res = pow(2, count);
		return res;
	}
};
int main()
{
	string S = "helllllooo";
	Solution solution;
	cout << solution.stretchWord(S);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}