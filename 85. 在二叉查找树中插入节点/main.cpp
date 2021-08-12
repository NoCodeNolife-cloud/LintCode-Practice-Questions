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


/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    TreeNode* insertNode(TreeNode* root, TreeNode* node) {
        if (root == NULL) {
            return node;
        }
        if (node->val < root->val) {
            root->left = insertNode(root->left, node);
            return root;
        }
        root->right = insertNode(root->right, node);
        return root;
    }
};

void traverse(TreeNode *root) {
    if (root == NULL) {
        return;
    }
    cout << root->val << " ";
    traverse(root->left);
    traverse(root->right);
}

int main() {
    Solution solution;
    TreeNode *root = new TreeNode(8);
    TreeNode *node1 = new TreeNode(2);
    root->left = node1;
    TreeNode *node = new TreeNode(1);
    TreeNode *res = solution.insertNode(root, node);
    traverse(res);
    return 0;
}
