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
class Solution {
public:
	/**
	 * @param str: str: the given string
	 * @return: char: the first unique character in a given string
	 */
	char firstUniqChar(string& str) {
		vector<pair<char, int>>count;
		if (str.size() == 1) {
			return str[0];
		}
		else {
			pair<char, int>temp;
			temp.first = str[0];
			temp.second = 1;
			count.push_back(temp);
			size_t strsize = str.size();
			for (int i = 1; i < strsize; ++i) {
				bool find = false;
				size_t countsize = count.size();
				for (int j = 0; j < countsize; ++j) {
					if (count[j].first == str[i]) {
						++count[j].second;
						find = true;
						break;
					}
				}
				if (!find) {
					temp.first = str[i];
					temp.second = 1;
					count.push_back(temp);
				}
			}
			size_t countsize = count.size();
			for (int i = 0; i < countsize; ++i) {
				if (count[i].second == 1) {
					return count[i].first;
				}
			}
		}
	}
};
using namespace std;
int main()
{
	string str = "abaccdeff";
	Solution solution;
	cout << solution.firstUniqChar(str);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}