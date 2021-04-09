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
bool cmp(int x, int y) {
	if (x < y) {
		return true;
	}
	else {
		return false;
	}
}
class Solution {
public:
	/**
	 * @param heights: Students height
	 * @return: How many people are not where they should be
	 */
	int orderCheck(vector<int>& heights) {
		int res = 0;
		vector<int>count(heights);
		sort(count.begin(), count.end(), cmp);
		for (int i = 0; i < count.size(); i++) {
			if (count[i] != heights[i]) {
				res++;
			}
		}
		return res;
	}
};
int main()
{
	vector<int>height = { 1, 1, 3, 3, 4, 1 };
	Solution solution;
	cout << solution.orderCheck(height);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}