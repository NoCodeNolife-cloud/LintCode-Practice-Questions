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
	 * @param s: a string
	 * @return: a string after capitalizes the first letter
	 */
	string capitalizesFirst(string& s) {
		bool first = true;
		for (int i = 0; i < s.size(); i++) {
			if (isalpha(s[i]) and first == true) {
				first = false;
				s[i] = toupper(s[i]);
			}
			else if (isalpha(s[i]) and first == false) {
				continue;
			}
			else if (!isalpha(s[i])) {
				first = true;
			}
		}
		return s;
	}
};
int main()
{
	string s = "i want to get an accepted";
	Solution solution;
	cout << solution.capitalizesFirst(s);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}