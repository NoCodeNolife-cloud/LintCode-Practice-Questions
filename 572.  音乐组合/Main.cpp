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
	 * @param musics: the musics
	 * @return: calc the number of pair of music
	 */
	long long musicPairs(vector<int>& musics) {
		unordered_map<int, long long>hash;
		long long ans = 0;
		for (int music : musics) {
			if (hash.find(60 - music) != hash.end())
			{
				ans += hash[60 - music];
			}
			++hash[music % 60];
		}
		return ans;
	}
};
int main()
{
	vector<int>musics = { 1, 2, 59, 60 };
	Solution solution;
	cout << solution.musicPairs(musics);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}