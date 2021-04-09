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
	 * @param inputs: an integer array
	 * @param tests: an integer array
	 * @return: return true if sum of two values in inputs are in tests.
	 */
	bool addAndSearch(vector<int>& inputs, vector<int>& tests) {
		vector<int>sum;
		int size = inputs.size();
		for (int i = 0; i < size; i++) {
			for (int j = i + 1; j < size; j++) {
				sum.push_back(inputs[i] + inputs[j]);
			}
		}
		int sizesum = sum.size();
		for (int i = 0; i < sizesum; i++) {
			for (int j = 0; j < tests.size(); j++) {
				if (sum[i] == tests[j]) {
					return true;
				}
			}
		}
		return false;
	}
};
int main()
{
	vector<int>inputs = {
		-3,5,3
	};
	vector<int>tests = {
		-1,0,1,2
	};
	Solution solution;
	cout << boolalpha << solution.addAndSearch(inputs, tests);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}