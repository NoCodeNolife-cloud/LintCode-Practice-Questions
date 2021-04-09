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
	 * @return: Postorder in ArrayList which contains node values.
	 */
	vector<int>preorder;
	void traverse(TreeNode* root) {
		if (root == NULL) {
			return;
		}
		traverse(root->left);
		traverse(root->right);
		preorder.push_back(root->val);
	}
	vector<int> postorderTraversal(TreeNode* root) {
		preorder.clear();
		traverse(root);
		return preorder;
	}
};
int main()
{
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}