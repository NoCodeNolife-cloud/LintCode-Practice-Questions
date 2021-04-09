#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param bills: the Bill
	 * @return: Return true if and only if you can provide every customer with correct change.
	 */
	bool lemonadeChange(vector<int>& bills) {
		vector<int>money(3, 0);
		for (int i = 0; i < bills.size(); i++) {
			if (bills[i] == 5) {
				money[0]++;
			}
			else if (bills[i] == 10) {
				if (money[0] > 0) {
					money[0]--;
					money[1]++;
				}
				else {
					return false;
				}
			}
			else {
				if (money[1] > 0 and money[0] > 0) {
					money[1]--;
					money[0]--;
					money[2]++;
				}
				else if (money[0] > 2) {
					money[0] -= 3;
					money[2]++;
				}
				else {
					return false;
				}
			}
		}
		return true;
	}
};
int main()
{
	Solution solution;
	vector<int> bills = {
		5,5,5,10,20
	};
	if (solution.lemonadeChange(bills)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	system("pause");
	return 0;
}