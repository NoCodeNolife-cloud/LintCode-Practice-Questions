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
class TreeNode {
public:
	int val;
	TreeNode* left, * right;
	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};

class Solution {
public:
	/**
	 * @param root: A Tree
	 * @return: Level order a list of lists of integer
	 */
	vector<vector<int>> levelOrder(TreeNode* root) {
		if (!root) {
			return {};
		}
		queue<TreeNode*>q;
		vector<vector<int>>results;
		q.push(root);
		while (!q.empty()) {
			results.push_back({});
			auto& result = results.back();
			int size = q.size();
			for (int i = 0; i < size; i++) {
				auto cur = q.front();
				result.push_back(cur->val);
				if (cur->left) {
					q.push(cur->left);
				}
				if (cur->right) {
					q.push(cur->right);
				}
				q.pop();
			}
		}
		return results;
	}
};
int main()
{
	TreeNode treenode(1);
	TreeNode* head = &treenode;
	TreeNode treenode2(2);
	treenode.left = &treenode2;
	TreeNode treenode3(3);
	treenode.right = &treenode3;
	Solution solution;
	vector<vector<int>>count = solution.levelOrder(head);
	for (vector<int> x : count) {
		for (int y : x) {
			cout << setw(5) << left << y;
		}
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}