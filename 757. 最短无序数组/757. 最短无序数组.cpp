#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param arr: an array of integers
	 * @return: the length of the shortest possible subsequence of integers that are unordered
	 */
	int shortestUnorderedArray(vector<int>& arr) {
		if (cheakIfLower(arr, 0, arr.size() - 1)) {
			return 0;
		}
		else if (cheakIfGreater(arr, 0, arr.size() - 1)) {
			return 0;
		}
		else {
			return 3;
		}
	}
	bool cheakIfGreater(vector<int>& arr, int a, int b) {
		for (int i = a; i <= b - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				return false;
			}
		}
		return true;
	}
	bool cheakIfLower(vector<int>& arr, int a, int b) {
		for (int i = a; i <= b - 1; i++) {
			if (arr[i] < arr[i + 1]) {
				return false;
			}
		}
		return true;
	}
}; int main()
{
	vector<int> arr = {
		1,2,3,4,5,4,3
	};
	Solution solution;
	cout << solution.shortestUnorderedArray(arr) << endl;
	system("pause");
	return 0;
}