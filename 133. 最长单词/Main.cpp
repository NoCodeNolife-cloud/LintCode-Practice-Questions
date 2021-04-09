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
	 * @param dictionary: an array of strings
	 * @return: an arraylist of strings
	 */
	vector<string> longestWords(vector<string>& dictionary) {
		vector<string>res;
		res.push_back(dictionary[0]);
		vector<string>::iterator iter;
		for (iter = dictionary.begin() + 1; iter != dictionary.end(); ++iter) {
			if (iter->size() > res[0].size()) {
				res.clear();
				res.push_back(*iter);
			}
			else if (iter->size() == res[0].size()) {
				res.push_back(*iter);
			}
		}
		return res;
	}
};
int main()
{
	vector<string>fictionary = {
		"dog","google","facebook","internationalization","blabla"
	};
	Solution solution;
	vector<string>res = solution.longestWords(fictionary);
	vector<string>::iterator iter;
	for (iter = res.begin(); iter != res.end(); ++iter) {
		cout << *iter << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}