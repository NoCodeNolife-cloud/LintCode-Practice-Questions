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
	 * @param paragraph:
	 * @param banned:
	 * @return: nothing
	 */
	string mostCommonWord(string& paragraph, vector<string>& banned) {
		map<string, int> hash;
		istringstream ss(paragraph);
		string strstream;
		while (ss >> strstream) {
			string stringtemp;
			for (int i = 0; i < strstream.size(); ++i) {
				if (isalpha(strstream[i])) {
					stringtemp.push_back(tolower(strstream[i]));
				}
			}
			strstream.clear();
			strstream = stringtemp;
			if (hash.find(strstream) != hash.end()) {//is find
				++hash[strstream];
			}
			else {//not find
				hash[strstream] = 1;
			}
		}
		size_t size_banned = banned.size();
		for (int i = 0; i < size_banned; ++i) {
			if (hash.find(banned[i]) != hash.end()) {
				hash.erase(banned[i]);
			}
		}
		map<string, int>::iterator iter = hash.begin();
		string temp = iter->first;
		++iter;
		for (; iter != hash.end(); ++iter) {
			if (iter->second > hash[temp]) {
				temp = iter->first;
			}
		}
		return temp;
	}
};
int main()
{
	string str = "Bob hit a ball, the hit BALL flew far after it was hit.";
	Solution solution;
	vector<string>banned = { "hit" };
	cout << solution.mostCommonWord(str, banned) << endl;
	system("pause");
	return 0;
}