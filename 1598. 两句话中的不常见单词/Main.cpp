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
	 * @param A: Sentence A
	 * @param B: Sentence B
	 * @return: Uncommon Words from Two Sentences
	 */
	vector<string> uncommonFromSentences(string& A, string& B) {
		istringstream ss1(A);
		istringstream ss2(B);
		map<string, int>hash1, hash2;
		string temp;
		while (ss1 >> temp) {
			if (hash1.find(temp) == hash1.end()) {
				hash1[temp] = 1;
			}
			else {
				hash1[temp]++;
			}
		}
		while (ss2 >> temp) {
			if (hash2.find(temp) == hash2.end()) {
				hash2[temp] = 1;
			}
			else {
				hash2[temp]++;
			}
		}
		vector<string>res;
		for (map<string, int>::iterator iter = hash1.begin(); iter != hash1.end(); iter++) {
			if (hash2.find(iter->first) == hash2.end() and iter->second == 1) {
				res.push_back(iter->first);
			}
		}
		for (map<string, int>::iterator iter = hash2.begin(); iter != hash2.end(); iter++) {
			if (hash1.find(iter->first) == hash1.end() and iter->second == 1) {
				res.push_back(iter->first);
			}
		}
		return res;
	}
};
int main()
{
	string A = "this apple is sweet", B = "this apple is sour";
	Solution solution;
	vector<string>res = solution.uncommonFromSentences(A, B);
	for (vector<string>::iterator iter = res.begin(); iter != res.end(); iter++) {
		cout << *iter << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}