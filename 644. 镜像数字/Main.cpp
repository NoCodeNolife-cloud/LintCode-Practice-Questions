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
	 * @param num: a string
	 * @return: true if a number is strobogrammatic or false
	 */
	bool isStrobogrammatic(string& num) {
		map<char, char>hash;
		hash['8'] = '8';
		hash['0'] = '0';
		hash['9'] = '6';
		hash['6'] = '9';
		hash['1'] = '1';
		string temp = num;
		for (int i = 0; i < temp.size(); i++) {
			temp[i] = hash[temp[i]];
		}
		reverse(temp.begin(), temp.end());
		if (temp == num) {
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
	string str = "69";
	cout << boolalpha << solution.isStrobogrammatic(str);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}