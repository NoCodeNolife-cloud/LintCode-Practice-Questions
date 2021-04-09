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
	 * @param numbers: An array of Integer
	 * @param target: target = numbers[index1] + numbers[index2]
	 * @return: [index1 + 1, index2 + 1] (index1 < index2)
	 */
	vector<int> twoSum(vector<int>& numbers, int target) {
		vector<int>res;
		size_t size = numbers.size();
		for (int i = 0; i < size; ++i) {
			for (int j = i + 1; j < size; ++j) {
				if (target == numbers[i] + numbers[j]) {
					res.push_back(i);
					res.push_back(j);
					return res;
				}
			}
		}
	}
};
int main()
{
	vector<int>numbers = {
		2,7,11,15
	};
	int target = 9;
	Solution solution;
	vector<int>res = solution.twoSum(numbers, target);
	vector<int>::iterator iter;
	for (iter = res.begin(); iter != res.end(); ++iter) {
		cout << setw(4) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}