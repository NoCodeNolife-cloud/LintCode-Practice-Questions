#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
	/**
	 * @param arr: an array of integers
	 * @return: return the biggest value X, which occurs in A exactly X times.
	 */

	 /*
	 * this is my answer
	 */

	 //int findX(vector<int>& arr) {
	 //	vector<pair<int, int>>res;
	 //	pair<int, int>temp(arr[0], 1);
	 //	res.push_back(temp);
	 //	for (int i = 1; i < arr.size(); i++) {
	 //		bool flag = false;
	 //		for (int j = 0; j < res.size(); j++) {
	 //			if (res[j].first == arr[i]) {
	 //				flag = true;
	 //				res[j].second++;
	 //				break;
	 //			}
	 //		}
	 //		if (flag == false) {
	 //			temp.first = arr[i];
	 //			temp.second = 1;
	 //			res.push_back(temp);
	 //		}
	 //	}
	 //	int maxindex = -1;
	 //	int i = 0;
	 //	do {
	 //		if (res[i].first == res[i].second) {
	 //			maxindex = i;
	 //			break;
	 //		}
	 //		i++;
	 //	} while (i < res.size());
	 //	if (maxindex == -1) {
	 //		return 0;
	 //	}
	 //	for (int i = maxindex + 1; i < res.size(); i++) {
	 //		if (res[i].first == res[i].second) {
	 //			if (res[i].first > res[maxindex].first) {
	 //				maxindex = i;
	 //			}
	 //		}
	 //	}
	 //	return res[maxindex].first;
	 //}

	 /*
	 * this is answer
	 */
};
int main()
{
	Solution solution;
	vector<int>vec = { 3,8,2,3,3,2 };
	cout << solution.findX(vec) << endl;
	system("pause");
	return 0;
}