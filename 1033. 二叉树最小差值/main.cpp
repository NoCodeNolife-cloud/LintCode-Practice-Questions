#include <iostream>
#include <vector>
#include <algorithm>

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
     * @return: the minimum difference between the values of any two different nodes in the tree
     */
    vector<int> nums;

    int minDiffInBST(TreeNode *root) {
        // Write your code here
        traverse(root);
        int ret = INT_MAX;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            ret = min(ret, nums[i] - nums[i - 1]);
        }
        return ret;
    }

    /**
     * 遍历
     * @param root 根节点
     */
    void traverse(TreeNode *root) {
        if (root != NULL) {
            nums.push_back(root->val);
            traverse(root->left);
            traverse(root->right);
        }
    }
};

int main() {
    return 0;
}
