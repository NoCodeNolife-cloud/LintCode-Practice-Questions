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
	 * @param operation: A list of operations.
	 * @return: The lamp has the longest liighting time.
	 */
	char longestLightingTime(vector<vector<int>>& operation) {
		int maxTime = operation[0][1];
		char answer = 'a' + operation[0][0];
		int n = operation.size();
		for (int i = 0; i < n - 1; i++) {
			vector<int>next = operation[i + 1];
			vector<int>current = operation[i];
			int time = next[1] - current[1];
			if (time > maxTime) {
				maxTime = time;
				answer = next[0] + 'a';
			}
		}
		return answer;
	}
};
int main()
{
	vector<vector<int>>operation = {
		{0,2},{1,5},{0,9},{2,15}
	};
	Solution solution;
	cout << solution.longestLightingTime(operation);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}