#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param str: a string containing uppercase alphabets and integer digits
	 * @return: the alphabets in the order followed by the sum of digits
	 */
	string rearrange(string& str) {
		if (str.size() == 0) {
			return "";
		}
		string res;
		int sum = 0;
		for (int i = 0; i < str.size(); i++) {
			if (isalpha(str[i])) {
				res.push_back(str[i]);
			}
			else if (isdigit(str[i])) {
				int temp = str[i] - '0';
				sum += temp;
			}
		}
		sort(res.begin(), res.end(), less<char>());
		res += to_string(sum);
		return res;
	}
};
int main()
{
	Solution solution;
	string str = "AC2BEW3";
	cout << solution.rearrange(str);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}