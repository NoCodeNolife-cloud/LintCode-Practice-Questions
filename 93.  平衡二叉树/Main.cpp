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
	 * @param root: The root of binary tree.
	 * @return: True if this Binary tree is Balanced, or false.
	 */
	bool isBalanced(TreeNode* root) {
		return dfs(root).first;
	}
	pair<bool, int>dfs(TreeNode* root) {
		if (!root) {
			return { true,0 };
		}
		auto l = dfs(root->left);
		auto r = dfs(root->right);
		pair<bool, int>ans = { true,max(l.second,r.second) + 1 };
		ans.first &= l.first && r.first && (abs(l.second - r.second) <= 1);
		return ans;
	}
};
int main()
{
	TreeNode treenode(1);
	TreeNode treenode2(2);
	TreeNode treenode3(3);
	treenode.left = &treenode2;
	treenode.right = &treenode3;
	TreeNode* head = &treenode;
	Solution solution;
	cout << boolalpha << solution.isBalanced(head);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}