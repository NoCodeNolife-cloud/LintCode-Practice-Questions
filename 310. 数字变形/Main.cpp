#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param A: the integer discrible in problem
	 * @return: the integer after distortion
	 */
	string Distortion(string& A) {
		vector<char>count;
		while (A.size() != 0) {
			count.push_back(A[0]);
			A.erase(A.begin());
		}
		string res;
		vector<char>::iterator iter1, iter2;
		for (iter1 = count.begin(), iter2 = count.end() - 1; 1; ) {
			res.push_back(*iter2);
			iter2--;
			if (iter1 > iter2) {
				break;
			}
			res.push_back(*iter1);
			iter1++;
			if (iter1 > iter2) {
				break;
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string A = "123456789999";
	cout << solution.Distortion(A);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}