#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	/**
	 * @param employees: information of the employees
	 * @param friendships: the friendships of employees
	 * @return: return the statistics
	 */
	vector<string> departmentStatistics(vector<string>& employees, vector<string>& friendships) {
		vector<string>sector;
		for (int i = 0; i < employees.size(); i++) {
			sector.push_back(employees[i].substr(employees[i].find_last_of(' ') + 1));
		}
		vector<pair<int, int>>friends;
		for (int i = 0; i < friendships.size(); i++) {
			string a = friendships[i].substr(0, friendships[i].find_first_of(','));
			string b = friendships[i].substr(friendships[i].find_first_of(' ') + 1);
			int inta = atof(a.c_str());
			int intb = atof(b.c_str());
			pair<int, int>temp;
			temp.first = inta;
			temp.second = intb;
			friends.push_back(temp);
		}
		vector<int>sectornumber;
		vector<string>res;
		res.push_back(sector[0]);
		sectornumber.push_back(1);
		for (int i = 1; i < sector.size(); i++) {
			bool flag = true;
			for (int j = 0; j < res.size(); j++) {
				if (res[j] == sector[i]) {
					sectornumber[j]++;
					flag = false;
				}
			}
			if (flag) {
				res.push_back(sector[i]);
				sectornumber.push_back(1);
			}
		}
		vector<int>friendnumber(res.size(), 0);
		if (friendships.size() != 0) {
			for (int i = 0; i < res.size(); i++) {
				int tempfirst = friends[i].first - 1;
				int tempsecend = friends[i].second - 1;
				if (sector[tempfirst] != sector[tempsecend]) {//not in same sector
					for (int j = 0; j < res.size(); j++) {
						if (sector[tempfirst] == res[j]) {
							friendnumber[j]++;
						}
						if (sector[tempsecend] == res[j]) {
							friendnumber[j]++;
						}
					}
				}
			}
		}
		for (int i = 0; i < res.size(); i++) {
			res[i] += ": " + to_string(friendnumber[i]) + " of " + to_string(sectornumber[i]);
		}
		return res;
	}
};
int main()
{
	vector<string>employees = {
		"1, Bill, Engineer",
		"2, Joe, HR",
		"3, Sally, Engineer",
		"4, Richard, Business",
		"6, Tom, Engineer"
	};
	vector<string> friendships = {
	};
	Solution solution;
	vector<string>res = solution.departmentStatistics(employees, friendships);
	for (string i : res) {
		cout << i << endl;
	}
	system("pause");
	return 0;
}