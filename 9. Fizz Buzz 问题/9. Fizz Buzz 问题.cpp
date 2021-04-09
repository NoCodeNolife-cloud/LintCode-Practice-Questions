#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	/**
	 * @param n: An integer
	 * @return: A list of strings.
	 */
	vector<string> fizzBuzz(int n) {
		vector<string> result(n);

		//for (int i = 1; i <= n; i++) {
		//	int key = 1;
		//	while (key && i % 15 == 0 ) {
		//		result[i - 1] = "fizz buzz";
		//		key--;
		//	}
		//	while (key && i % 3 == 0) {
		//		result[i - 1] = "fizz";
		//		key--;
		//	}
		//	while (key && i % 5 == 0) {
		//		result[i - 1] = "buzz";
		//		key--;
		//	}
		//	while (key) {
		//		result[i - 1] = to_string(i);
		//		break;
		//	}
		//}
		//return result;

		for (int i = 1; i <= n; i++) {
			if (i % 15 == 0) {
				result[i - 1] = "fizz buzz";
			}
			else if (i % 3 == 0) {
				result[i - 1] = "fizz";
			}
			else if (i % 5 == 0) {
				result[i - 1] = "buzz";
			}
			else {
				result[i - 1] = to_string(i);
			}
		}
		return result;
	}
};

int main()
{
	Solution solution;
	int i = 15000;
	vector<string> vec(i);
	vec = solution.fizzBuzz(i);
	for (string x : vec) {
		cout << x << endl;
	}
	return 0;
}