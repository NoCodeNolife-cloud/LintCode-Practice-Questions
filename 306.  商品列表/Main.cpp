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
	* @param offset: the number of items that the customer has viewed
	* @param n: the number of items that can be displayed on a page
	* @param len1: the length of L1
	* @param len2: the length of L2
	* @return: returns the intervals of goods displayed in L1 and L2
	*/
	vector<int> ProductList(int offset, int n, int len1, int len2) {
		vector<int> res(4, 0);

		if (offset < len1) {
			res[0] = offset;
			res[1] = min(offset + n, len1);
			if (offset + n > len1) {
				res[3] = min(offset + n - len1, len2);
			}
		}
		else {
			res[0] = res[1] = len1;
			res[2] = min(offset - len1, len2);
			res[3] = min(offset + n - len1, len2);
		}
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int>res = solution.ProductList(2, 4, 4, 4);
	for (int x : res) {
		cout << setw(5) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}