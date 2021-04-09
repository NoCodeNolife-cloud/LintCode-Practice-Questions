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
	 * @param wage: Salaries of all employees
	 * @param ask: Number of inquiries
	 * @return: Every time an answer is asked
	 */
	vector<int> PeopleCounting(vector<int>& wage, vector<int>& ask) {
		vector<int>res;
		map<int, int>hash;
		hash[wage[0]] = 1;
		for (int i = 1; i < wage.size(); i++) {
			if (hash.find(wage[i]) != hash.end()) {//find
				hash[wage[i]]++;
			}
			else {
				hash[wage[i]] = 1;
			}
		}
		for (int i = 0; i < ask.size(); i++) {
			if (hash.find(ask[i]) != hash.end()) {
				res.push_back(hash[ask[i]]);
			}
			else {
				res.push_back(0);
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>wage = {
		1,6,9,4,2,9,5,8,2,1,3,7,7,7,4,7,2,2,3,8
	};
	vector<int>ask = {
		2,3,7,8,5
	};
	vector<int>res = solution.PeopleCounting(wage, ask);
	for (vector<int>::iterator iter = res.begin(); iter != res.end(); iter++) {
		cout << setw(2) << left << *iter;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}