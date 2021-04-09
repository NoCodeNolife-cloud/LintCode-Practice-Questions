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
	 * @param s: The first string
	 * @param t: The second string
	 * @return: true or false
	 */
	bool anagram(string& s, string& t) {
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		if (s == t) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main()
{
	string s = "ab", t = "ab";
	Solution solution;
	cout << boolalpha << solution.anagram(s, t);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}