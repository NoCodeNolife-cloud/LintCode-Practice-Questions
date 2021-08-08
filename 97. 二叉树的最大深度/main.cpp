#include <iostream>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left, *right;

    TreeNode(int val) {
        this->val = val;
        this->left = this->right = NULL;
    }
};

class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: An integer
     */
    int maxDepth(TreeNode *root) {
        if (root == NULL)
            return 0;
        int leftdep = maxDepth(root->left);
        int rightdep = maxDepth(root->right);
        int dep = max(leftdep, rightdep);
        return dep + 1;
    }
};

int main() {
    TreeNode*treeNode1=new TreeNode(1);
    TreeNode*treeNode2=new TreeNode(2);
    TreeNode*treeNode3=new TreeNode(3);
    TreeNode*treeNode4=new TreeNode(4);
    TreeNode*treeNode5=new TreeNode(5);
    treeNode1->left=treeNode2;
    treeNode1->right=treeNode3;
    treeNode2->left=treeNode4;
    treeNode2->right=treeNode5;
    Solution solution;
    cout<<solution.maxDepth(treeNode1);
    return 0;
}
