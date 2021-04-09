#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param A: An integer array
	 * @return: An integer
	 */
	int singleNumber(vector<int>& A) {
		vector<pair<int, int>>count;
		pair<int, int>temp;
		temp.first = A[0];
		temp.second = 1;
		count.push_back(temp);
		for (int i = 1; i < A.size(); i++) {
			bool flag = true;
			for (int j = 0; j < count.size(); j++) {
				if (count[j].first == A[i]) {
					count[j].second++;
					flag = false;
					break;
				}
			}
			if (flag) {
				temp.first = A[i];
				temp.second = 1;
				count.push_back(temp);
			}
		}
		for (int i = 0; i < count.size(); i++) {
			if (count[i].second == 1) {
				return count[i].first;
			}
		}
	}
};
int main()
{
	vector<int> A = {
		0,0,1
	};
	Solution solution;
	cout << solution.singleNumber(A) << endl;
	system("pause");
	return 0;
}