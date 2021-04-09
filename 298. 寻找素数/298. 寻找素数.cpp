#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
	/**
	 * @param n: an integer
	 * @return: return all prime numbers within n.
	 */
	vector<int> prime(int n) {
		vector<int>res;
		for (int i = 2; i <= n; i++) {
			bool flags = false;
			for (int j = 2; j <= sqrt(i); j++) {
				if (i % j == 0) {
					flags = true;
					break;
				}
			}
			if (flags == false) {
				res.push_back(i);
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>res;
	res = solution.prime(10);
	cout << "[";
	for (int i = 0; i < res.size(); i++) {
		cout << res[i];
		if (i != res.size() - 1) {
			cout << ",";
		}
	}
	cout << "]\n";
	system("pause");
	return 0;
}