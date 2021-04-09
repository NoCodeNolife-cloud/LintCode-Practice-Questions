#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Solution {
public:
	/*
	 * @param num: An integer
	 * @return: An integer
	 */
	int countOnes(int num) {
		if (num >= 0) {
			if (num == 0) {
				return 0;
			}
			vector<int>count;
			while (num / 2 != 0) {
				count.push_back(num % 2);
				num /= 2;
			}
			count.push_back(1);
			int res = 0;
			for (int i : count) {
				if (i == 1) {
					res++;
				}
			}
			return res;
		}
		else {
			num = abs(num);
			vector<int>count;
			while (num / 2 != 0) {
				count.push_back(num % 2);
				num /= 2;
			}
			count.push_back(1);
			reverse(count.begin(), count.end());
			vector<int>temp(32 - count.size(), 0);
			count.insert(count.begin(), temp.begin(), temp.end());
			for (int i = 0; i < count.size(); i++) {
				if (count[i] == 1) {
					count[i] = 0;
				}
				else {
					count[i] = 1;
				}
			}
			for (int i = count.size() - 1; i >= 0; i--) {
				if (count[i] == 1) {
					count[i] = 0;
				}
				else {
					count[i] = 1;
					break;
				}
			}
			int res = 0;
			for (int i : count) {
				if (i == 1) {
					res++;
				}
			}
			return res;
		}
	}
};
int main()
{
	Solution solution;
	cout << solution.countOnes(-1) << endl;
	system("pause");
	return 0;
}