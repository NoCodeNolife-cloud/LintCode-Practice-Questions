#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
	/**
	 * @param array: An array.
	 * @return: An integer.
	 */

	 /*
	 * my answer
	 */

	 //int findNumber(vector<int>& array) {
	 //	vector<pair<int, int>>count;
	 //	pair<int, int>temp(array[0], 1);
	 //	count.push_back(temp);
	 //	for (int i = 1; i < array.size(); i++) {
	 //		int flags = 0;
	 //		for (int j = 0; j < count.size(); j++) {
	 //			if (count[j].first == array[i]) {
	 //				count[j].second++;
	 //				flags = 1;
	 //				break;
	 //			}
	 //		}
	 //		if (flags == 0) {
	 //			temp.first = array[i];
	 //			temp.second = 1;
	 //			count.push_back(temp);
	 //		}
	 //	}
	 //	int maxindex = 0;
	 //	for (int i = 1; i < count.size(); i++) {
	 //		if (count[maxindex].second < count[i].second || (count[maxindex].second == count[i].second && count[maxindex].first > count[i].first)) {
	 //			maxindex = i;
	 //		}
	 //	}
	 //	return count[maxindex].first;
	 //}

	 /*
	 * the answer
	 */
	int findNumber(vector<int>& array) {
		int n = array.size();//size of the array
		map<int, int>mp;//map template as <int,int>
		int maxx = 0, k;
		for (int i = 0; i < n; i++) {
			mp[array[i]]++;
		}
		map<int, int>::iterator it;
		for (it = mp.begin(); it != mp.end(); it++) {
			if (it->second > maxx) {
				k = it->first;
				maxx = it->second;
			}
		}
		return k;
	}
};
int main()
{
	Solution solution;
	vector<int>vec = { 5,5,5,1,1,2,3,3,3,4 };
	cout << solution.findNumber(vec) << endl;
	system("pause");
	return 0;
}