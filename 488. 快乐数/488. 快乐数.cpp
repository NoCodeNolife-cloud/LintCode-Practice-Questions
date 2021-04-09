#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param n: An integer
	 * @return: true if this is a happy number or false
	 */
	bool isHappy(int n) {
		vector<int>countsum;
		int sum = n;
		do {
			vector<int>count;
			while (sum != 0) {
				count.push_back(sum % 10);
				sum /= 10;
			}
			sum = 0;
			for (int i = 0; i < count.size(); i++) {
				sum += pow(count[i], 2);
			}
			countsum.push_back(sum);
			for (int i = 0; i < countsum.size() - 1; i++) {
				if (countsum[countsum.size() - 1] == countsum[i]) {
					return false;
				}
			}
		} while (sum != 1);
		return true;
	}
};
int main()
{
	Solution solution;
	cout << solution.isHappy(3) << endl;
	system("pause");
	return 0;
}