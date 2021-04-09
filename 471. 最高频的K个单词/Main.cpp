#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
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
	 * @param words: an array of string
	 * @param k: An integer
	 * @return: an array of string
	 */
	vector<string> topKFrequentWords(vector<string>& words, int k) {
		vector<string>result;
		if (words.empty()) {
			return result;
		}
		unordered_map<string, int>table;
		auto cmp = [&](const string& s1, const string& s2) {
			if (table[s2] == table[s1]) {
				return s2 < s1;
			}
			return table[s2] > table[s1];
		};
		priority_queue<string, vector<string>, decltype(cmp)>pq(cmp);
		for (const auto& word : words) {
			if (table.find(word) == table.end()) {
				table[word] = 1;
			}
			else {
				table[word] += 1;
			}
		}
		for (auto elem : table) {
			pq.push(elem.first);
		}
		for (int i = 0; i < k; ++i) {
			result.push_back(pq.top());
			pq.pop();
		}
		return result;
	}
};
int main()
{
	vector<string>words = { "yes","lint","code","yes","code","baby","you","baby","chrome","safari","lint","code","body","lint","code" };
	Solution solution;
	vector<string>res = solution.topKFrequentWords(words, 3);
	for (int i = 0; i < res.size(); i++) {
		cout << setw(8) << left << res[i];
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}