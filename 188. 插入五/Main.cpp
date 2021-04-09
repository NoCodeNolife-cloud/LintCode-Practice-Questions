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
	 * @param a: A number
	 * @return: Returns the maximum number after insertion
	 */
	int InsertFive(int a) {
		if (a > 0) {
			vector<int>num;
			while (a != 0) {
				num.push_back(a % 10);
				a /= 10;
			}
			size_t numsize = num.size();
			bool add = false;
			for (int i = numsize - 1; i >= 0; --i) {
				if (num[i] < 5) {
					num.insert(num.begin() + i + 1, 5);
					add = true;
					break;
				}
			}
			if (!add) {
				num.push_back(5);
			}
			int sum = 0;
			numsize = num.size();
			for (int i = 0; i < numsize; ++i) {
				sum += num[i] * pow(10, i);
			}
			return sum;
		}
		else if (a < 0) {
			a = abs(a);
			vector<int>num;
			while (a != 0) {
				num.push_back(a % 10);
				a /= 10;
			}
			size_t numsize = num.size();
			bool add = false;
			for (int i = numsize - 1; i >= 0; --i) {
				if (num[i] > 5) {
					num.insert(num.begin() + i + 1, 5);
					add = true;
					break;
				}
			}
			if (!add) {
				num.push_back(5);
			}
			int sum = 0;
			numsize = num.size();
			for (int i = 0; i < numsize; ++i) {
				sum += num[i] * pow(10, i);
			}
			return -1 * sum;
		}
		else {
			return 50;
		}
	}
};
int main()
{
	int a = -4937;
	Solution solution;
	cout << solution.InsertFive(a);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}