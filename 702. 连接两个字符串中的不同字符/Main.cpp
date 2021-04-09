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
	 * @param s1: the 1st string
	 * @param s2: the 2nd string
	 * @return: uncommon characters of given strings
	 */
	string concatenetedString(string& s1, string& s2) {
		for (int i = 0; i < s1.size();) {
			bool find = false;
			for (int j = 0; j < s2.size(); j++) {
				if (s1[i] == s2[j]) {
					find = true;
					char del = s1[i];//find the delete
					for (int k = 0; k < s1.size();) {
						if (s1[k] == del) {
							s1.erase(s1.begin() + k);
						}
						else {
							k++;
						}
					}
					for (int k = 0; k < s2.size();) {
						if (s2[k] == del) {
							s2.erase(s2.begin() + k);
						}
						else {
							k++;
						}
					}
					break;
				}
			}
			if (!find) {
				i++;
			}
		}
		return s1 + s2;
	}
};
int main()
{
	Solution solution;
	string s1 = "abcs";
	string s2 = "gafd";
	cout << solution.concatenetedString(s1, s2);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}