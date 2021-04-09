#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param n: An integer.
	 * @return: A string list.
	 */
	vector<string> printX(int n) {
		vector<string>result;
		for (int i = 0; i < n; i++) {
			string temp(n, ' ');
			temp[i] = 'X';
			temp[n - i - 1] = 'X';
			result.push_back(temp);
		}
		return result;
	}
};
int main() {
	Solution solution;
	vector<string> str = solution.printX(5);
	for (string x : str) {
		cout << x << endl;
	}
	system("pause");
	return 0;
}