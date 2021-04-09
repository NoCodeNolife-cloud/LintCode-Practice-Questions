#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
	/**
	 * @param queen: queen‘coordinate
	 * @param knight: knight‘coordinate
	 * @return: if knight is attacked please return true，else return false
	 */
	vector<bool> isAttacked(vector<vector<int>>& queen, vector<vector<int>>& knight) {
		int n = queen.size();
		int m = knight.size();
		map<int, bool>Row, Column, Diagonal, Diagonal2;
		for (int i = 0; i < n; i++) {
			Row[queen[i][0]] = true;
			Column[queen[i][1]] = true;
			Diagonal[queen[i][1] - queen[i][0]] = true;
			Diagonal2[queen[i][1] + queen[i][0]] = true;
		}
		vector<bool>ans;
		for (int i = 0; i < m; i++) {
			bool isattacked = false;
			if (Row[knight[i][0]] || Column[knight[i][1]] || Diagonal[knight[i][1] - knight[i][0]] || Diagonal2[knight[i][1] + knight[i][0]]) {
				ans.push_back(true);
			}
			else {
				ans.push_back(false);
			}
		}
		return ans;
	}
};
int main()
{
	Solution solution;
	vector<vector<int>> queen = {
		{1,1},{2,2}
	};
	vector<vector<int>> knight = {
		{3,3},{1,3},{4,5}
	};
	vector<bool>res = solution.isAttacked(queen, knight);
	vector<bool>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << boolalpha << *iter << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}