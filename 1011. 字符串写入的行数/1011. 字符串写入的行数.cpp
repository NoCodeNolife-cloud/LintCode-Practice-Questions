#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param widths: an array
	 * @param S: a string
	 * @return: how many lines have at least one character from S, and what is the width used by the last such line
	 */
	vector<int> numberOfLines(vector<int>& widths, string& S) {
		int width = 100;
		int line = 1;
		int rest = 0;
		int start = 'a';
		for (int i = 0; i < S.size(); i++) {
			int temp = S[i];
			int tempwidth = widths[temp - start];
			rest += tempwidth;
			if (rest > width) {
				line++;
				rest = tempwidth;
			}
		}
		vector<int>res;
		res.push_back(line);
		res.push_back(rest);
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int> widths = {
		10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10
	};
	string S = "abcdefghijklmnopqrstuvwxyz";
	vector<int>res = solution.numberOfLines(widths, S);
	vector<int>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << setw(3) << left << *iter;
	}
	cout << endl;
	system("pause");
	return 0;
}