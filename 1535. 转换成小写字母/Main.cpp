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
	 * @param str: the input string
	 * @return: The lower case string
	 */
	string toLowerCase(string& str) {
		for (int i = 0; i < str.size(); i++) {
			str[i] = tolower(str[i]);
		}
		return str;
	}
};
int main()
{
	string str = "Hello";
	Solution solution;
	cout << solution.toLowerCase(str);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}