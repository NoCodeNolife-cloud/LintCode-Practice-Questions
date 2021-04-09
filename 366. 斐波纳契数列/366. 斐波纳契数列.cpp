#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param n: an integer
	 * @return: an ineger f(n)
	 */
	int fibonacci(int n) {
		n--;
		vector<int>res = { 0,1 };
		for (int i = 2; i <= n; i++) {
			res.push_back(res[i - 1] + res[i - 2]);
		}
		return res[n];
	}
};
int main()
{
	Solution solution;
	vector<int>res;
	for (int i = 1; i <= 10; i++) {
		res.push_back(solution.fibonacci(i));
	}
	int count = 0;
	for (int x : res) {
		cout.width(5);
		cout << x << " ";
		count++;
		if (count == 10) {
			cout << endl;
		}
	}
	system("pause");
	return 0;
}