#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
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
#include <stdio.h>
using namespace std;
/*-------------------------------------------------------*/
class Solution {
public:
	/**
	 * @param number: an only contains from 1 to 9 array
	 * @return: return  whether or not each sliding window position contains all the numbers for 1 to 9
	 */
	vector<bool> SlidingWindows(vector<vector<int>>& number) {
		vector<bool>res;
		for (int i = 0; i < number[0].size() - 2; i++) {
			vector<int>count;
			for (int j = i; j < i + 3; j++) {
				count.push_back(number[0][j]);
			}
			for (int j = i; j < i + 3; j++) {
				count.push_back(number[1][j]);
			}
			for (int j = i; j < i + 3; j++) {
				count.push_back(number[2][j]);
			}
			bool find = true;
			for (int j = 1; j < 10; j++) {
				find = false;
				for (int k = 0; k < count.size(); k++) {
					if (count[k] == j) {
						find = true;
						break;
					}
				}
				if (find == false) {
					break;
				}
			}
			if (find == false) {
				res.push_back(false);
			}
			else {
				res.push_back(true);
			}
		}
		return res;
	}
};
int main()
{
	vector<vector<int>>number = { {1, 2, 3, 2, 5, 7}, {4, 5, 6, 1, 7, 6}, {7, 8, 9, 4, 8, 3} };
	Solution solution;
	vector<bool>res = solution.SlidingWindows(number);
	for (bool x : res) {
		cout << setw(10) << left << boolalpha << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}