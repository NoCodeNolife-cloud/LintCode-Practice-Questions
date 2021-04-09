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
	/**
	 * @param s: string
	 * @return: sort string in lexicographical order
	 */
	string sorting(string& s) {
		vector<string>res;
		string temp;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != ',') {
				temp.push_back(s[i]);
			}
			else {
				res.push_back(temp);
				temp.clear();
			}
			if (i == s.size() - 1) {
				res.push_back(temp);
				break;
			}
		}
		sort(res.begin(), res.end(), less<string>());
		string count;
		for (int i = 0; i < res.size(); i++) {
			count += res[i];
			if (i != res.size() - 1) {
				count.push_back(',');
			}
		}
		return count;
	}
};
int main()
{
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}