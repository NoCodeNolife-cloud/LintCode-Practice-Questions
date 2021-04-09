#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param s: the given string
	 * @return: the number of A
	 */
	int countA(string& s) {
		int res;
		if (s[0] != 'A') {
			res = 0;
		}
		else {
			res = 1;
		}
		bool find = false;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] != 'A' and find == false) {
				continue;
			}
			else if (s[i] == 'A') {
				res++;
				find = true;
			}
			else {
				break;
			}
		}
		return res;
	}
};
int main()
{
	string s = "BBAACCDD";
	Solution solution;
	cout << solution.countA(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}