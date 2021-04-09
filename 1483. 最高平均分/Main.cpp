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
	 * @param names: the name
	 * @param grades: the grade
	 * @return: the maximum average score
	 */
	double maximumAverageScore(vector<string>& names, vector<int>& grades) {
		if (names.size() == 1) {
			return grades[0];
		}
		vector<string>name;
		name.push_back(names[0]);
		vector<double>count;
		count.push_back(1);
		vector<double>sum;
		sum.push_back(grades[0]);
		for (int i = 1; i < names.size(); i++) {
			bool find = false;
			for (int j = 0; j < name.size(); j++) {
				if (name[j] == names[i]) {
					find = true;
					count[j]++;
					sum[j] += grades[i];
					break;
				}
			}
			if (!find) {
				name.push_back(names[i]);
				count.push_back(1);
				sum.push_back(grades[i]);
			}
		}
		double res = 0;
		for (int i = 0; i < name.size(); ++i) {
			res = max(res, sum[i] / count[i]);
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<string>names = {
		"bob","ted","ted"
	};
	vector<int>grades = {
		88,100,20
	};
	cout << solution.maximumAverageScore(names, grades);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}