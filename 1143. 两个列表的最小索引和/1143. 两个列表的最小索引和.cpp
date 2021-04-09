#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param list1: a list of strings
	 * @param list2: a list of strings
	 * @return: the common interest with the least list index sum
	 */
	vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
		vector<string>res;
		bool flags = false;
		for (int sum = 0; sum <= list1.size() + list2.size(); sum++) {
			for (int i = 0, j = sum - i; i < list1.size() and i >= 0 and j >= 0 and j < list2.size(); i++, j--) {
				if (list1[i] == list2[j]) {
					res.push_back(list1[i]);
					flags = true;
				}
			}
			if (flags) {
				return res;
			}
		}
	}
};
int main()
{
	vector<string>list1 = {
		"dixyp","uq","q","KFC"
	};
	vector<string>list2 = {
		"yl","fjugc","rlni","dixyp","uq","q","KFC"
	};
	Solution solution;
	vector<string>res = solution.findRestaurant(list1, list2);
	for (string x : res) {
		cout << x << endl;
	}
	system("pause");
	return 0;
}