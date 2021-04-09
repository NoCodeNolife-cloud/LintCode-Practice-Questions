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
	 * @param A: the array A
	 * @param B: the array B
	 * @return: returns an alternate array of arrays A and B.
	 */
	vector<int> interleavedArray(vector<int>& A, vector<int>& B) {
		vector<int>res;
		if (A.size() == 0) {
			return res;
		}
		else {
			size_t size = A.size();
			for (int i = 0; i < size; i++) {
				res.push_back(A[i]);
				res.push_back(B[i]);
			}
		}
		return res;
	}
};
int main()
{
	vector<int> A = { 1,2 };
	vector<int> B = { 3,4 };
	Solution solution;
	vector<int>res = solution.interleavedArray(A, B);
	for (int x : res) {
		cout << setw(5) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}