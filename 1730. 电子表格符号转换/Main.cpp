#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
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
	 * @param index: the index to be converted
	 * @return: return the string after convert.
	 */
	string convert(long long index) {
		string res;
		long long temp = index - 1;
		long long num = temp / 702 + 1;
		while (num != 0) {
			res.push_back(num % 10 + '0');
			num /= 10;
		}
		reverse(res.begin(), res.end());
		temp = temp % 702;
		if (temp / 26 != 0) {
			res += (temp / 26 - 1 + 'A');
		}
		res += (temp % 26 + 'A');
		return res;
	}
};
int main()
{
	Solution solution;
	cout << solution.convert(27);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}