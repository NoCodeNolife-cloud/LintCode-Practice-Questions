#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param arr: An array
	 * @return: An array
	 */
	vector<int> getSum(vector<int>& arr) {
		vector<int>res;
		for (int i = 0; i < arr.size(); i++) {
			vector<int>count;
			for (int j = 0; j < arr.size(); j++) {
				if (arr[i] > arr[j] and i != j) {
					count.push_back(arr[j]);
				}
			}
			int sum = 0;
			for (int j = 0; j < count.size(); j++) {
				sum += count[j];
			}
			res.push_back(sum);
			count.clear();
		}
		return res;
	}
};
int main()
{
	vector<int>vec = {
		2,4,8,3
	};
	Solution solution;
	vector<int>res = solution.getSum(vec);
	for (int x : res) {
		cout << setw(3) << left << x;
	}
	cout << endl;
	system("pause");
	return 0;
}