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
     * @param root: the root
     * @return: the second minimum value in the set made of all the nodes' value in the whole tree
     */
    int findSecondMinimumValue(TreeNode *root) {
        int min_value = INT_MAX, second_min_value = INT_MAX;
        traverse(root, min_value, second_min_value);
        if (second_min_value == INT_MAX) {
            return -1;
        }
        return second_min_value;
    }

    void traverse(TreeNode *root, int &min_value, int &second_min_value) {
        if (root == NULL) {
            return;
        }
        if (min_value != root->val and second_min_value != root->val) {
            if (min_value > root->val) {
                second_min_value = min_value;
                min_value = root->val;
            } else if (second_min_value > root->val) {
                second_min_value = root->val;
            }
        }
        traverse(root->left, min_value, second_min_value);
        traverse(root->right, min_value, second_min_value);
    }
};

int main() {
    TreeNode treeNode1(2);
    TreeNode treeNode2(2);
    TreeNode treeNode3(2);
    treeNode1.left = &treeNode2;
    treeNode1.right = &treeNode3;
    Solution solution;
    cout << solution.findSecondMinimumValue(&treeNode1);
    return 0;
}
