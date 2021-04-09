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
	int res = INT_MAX, pre = -1;
	/**
	 * @param root:  a Binary Search Tree (BST) with the root node
	 * @return: the minimum difference
	 */
	int minDiffInBST(TreeNode* root) {
		if (root->left != NULL) {
			minDiffInBST(root->left);
		}
		if (pre >= 0) {
			res = min(res, root->val - pre);
		}
		pre = root->val;
		if (root->right != NULL) {
			minDiffInBST(root->right);
		}
		return res;
	}
};
int main()
{
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}