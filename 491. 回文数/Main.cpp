#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param num: a positive number
	 * @return: true if it's a palindrome or false
	 */
	bool isPalindrome(int num) {
		vector<int>count;
		while (num != 0) {
			count.push_back(num % 10);
			num /= 10;
		}
		vector<int>tempcount(count);
		reverse(count.begin(), count.end());
		if (count == tempcount) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main()
{
	Solution solution;
	cout << boolalpha << solution.isPalindrome(12321);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}