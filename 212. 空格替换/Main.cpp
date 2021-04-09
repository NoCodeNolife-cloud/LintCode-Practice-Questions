#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	/*
	 * @param string: An array of Char
	 * @param length: The true length of the string
	 * @return: The true length of new string
	 */
	int replaceBlank(char string[], int length) {
		std::string str;
		for (int i = 0; i < length; ++i) {
			if (string[i] == ' ') {
				str += "%20";
			}
			else {
				str.push_back(string[i]);
			}
		}
		int res = str.size();
		for (int i = 0; i < res; ++i) {
			string[i] = str[i];
		}
		return res;
	}
};
int main()
{
	Solution solution;
	char string[20] = {
		'M','r',' ','J','o','h','n',' ','S','m','i','t','h'
	};
	cout << solution.replaceBlank(string, 13);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}