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
	 * @param cars:  integer array of length denoting the parking slots where cars are parked
	 * @param k: integer denoting the number of cars that have to be covered by the roof
	 * @return: return the minium length of the roof that would cover k cars
	 */
	int ParkingDilemma(vector<int>& cars, int k) {
		sort(cars.begin(), cars.end(), less<int>());
		int res = INT_MAX;
		for (int i = 0; i < cars.size() - k + 1; i++) {
			res = min(cars[i + k - 1] - cars[i], res);
		}
		return res + 1;
	}
};
int main()
{
	Solution solution;
	vector<int>cars = {
		2, 10, 8, 17
	};
	cout << solution.ParkingDilemma(cars, 3);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}