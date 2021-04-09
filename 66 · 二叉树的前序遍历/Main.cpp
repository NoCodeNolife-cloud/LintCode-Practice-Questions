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
	 * @return: Preorder in ArrayList which contains node values.
	 */
	vector<int>preorder;
	void traverse(TreeNode* root) {
		if (root == NULL) {
			return;
		}
		preorder.push_back(root->val);
		traverse(root->left);
		traverse(root->right);
	}
	vector<int> preorderTraversal(TreeNode* root) {
		preorder.clear();
		traverse(root);
		return preorder;
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
	vector<int>count = solution.preorderTraversal(head);
	for (int x : count) {
		cout << setw(5) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}