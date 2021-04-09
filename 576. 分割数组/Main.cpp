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
	 * @param arr: an inter array
	 * @return: return the min sum
	 */
	int splitArray(vector<int>& arr) {
		vector<int>temp(arr.begin() + 1, arr.end() - 1);
		sort(temp.begin(), temp.end(), less<int>());
		int i = temp[0], j = temp[1], k = temp[2];
		int indexi, indexj, indexk;
		bool findi = false, findj = false, findk = false;
		for (int l = 1; l < arr.size() - 1; l++) {
			if (arr[l] == i and !findi) {
				indexi = l;
				findi = true;
			}
			else if (arr[l] == j and !findj) {
				indexj = l;
				findj = true;
			}
			else if (arr[l] == k and !findk) {
				indexk = l;
				findk = true;
			}
		}
		if (abs(indexi - indexj) > 1) {
			return i + j;
		}
		else if (abs(indexi - indexk) > 1) {
			return i + k;
		}
		else {
			return j + k;
		}
	}
};
int main()
{
	vector<int>arr = { 5,2,4,6,3,7 };
	Solution solution;
	cout << solution.splitArray(arr);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}