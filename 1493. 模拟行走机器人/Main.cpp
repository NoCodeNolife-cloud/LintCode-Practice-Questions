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
	 * @param commands: type: List[int]
	 * @param obstacles: type: List[List[int]]
	 * @return: Return the square of the maximum Euclidean distance
	 */
	int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
		int maxdistance = 0;
		int positionx = 0, positiony = 0;
		int i = 1, j = 0;
		for (int k = 0; k < commands.size(); k++) {
			setposition(i, j, commands[k], positionx, positiony, obstacles);
			maxdistance = max(maxdistance, distance(positionx, positiony));
		}
		return maxdistance;
	}
	int distance(int x, int y) {
		return x * x + y * y;
	}
	void setposition(int& i, int& j, int x, int& positionx, int& positiony, vector<vector<int>>& obstacles) {
		if (x == -1) {
			if (i == 1 and j == 0) {
				i = 0;
				j = 1;
			}
			else if (i == 0 and j == 1) {
				i = -1;
				j = 0;
			}
			else if (i == -1 and j == 0) {
				i == 0;
				j = -1;
			}
			else if (i == 0 and j == -1) {
				i = 1;
				j = 0;
			}
		}
		else if (x == -2) {
			if (i == 1 and j == 0) {
				i = 0;
				j = -1;
			}
			else if (i == 0 and j == -1) {
				i = -1;
				j = 0;
			}
			else if (i == -1 and j == 0) {
				i = 0;
				j = 1;
			}
			else if (i == 0 and j == 1) {
				i = 1;
				j = 0;
			}
		}
		else {
			bool stacles = false;
			for (int k = 0; k < x and stacles == false; k++) {
				positionx += i;
				positiony += j;
				for (int l = 0; l < obstacles.size(); l++) {
					if (positiony == obstacles[l][0] and positionx == obstacles[l][1]) {
						stacles = true;
						positionx -= i;
						positiony -= j;
					}
				}
			}
		}
	}
};
int main()
{
	vector<int> commands = {
		4,-1,4,-2,4
	};
	vector<vector<int>> obstacles = {
		{2,4}
	};
	Solution solution;
	cout << solution.robotSim(commands, obstacles);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}