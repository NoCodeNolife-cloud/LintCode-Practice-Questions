#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
using namespace std;
class Solution {
public:
	/**
	 * @param arr: a integer array
	 * @return: return the unique array
	 */
	vector<int> getUniqueArray(vector<int>& arr) {
		map<int, bool>isVisited;
		int n = arr.size();
		vector<int>uniqueArray;
		for (int i = 0; i < n; i++) {
			if (!isVisited[arr[i]]) {
				isVisited[arr[i]] = true;
				uniqueArray.push_back(arr[i]);
			}
		}
		return uniqueArray;
	}
};
int main()
{
	vector<int>arr = {
		3,4,3,6
	};
	Solution solution;
	vector<int>res = solution.getUniqueArray(arr);
	for (int x : res) {
		cout << setw(2) << left << x;
	}
	cout << endl;
	system("pause");
	return 0;
}