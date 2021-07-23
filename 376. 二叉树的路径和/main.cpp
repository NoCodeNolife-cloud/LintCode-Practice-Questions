#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    int val;/*值*/
    TreeNode *left, *right;/*左右节点*/

    /// 默认构造函数
    TreeNode(int val) {
        this->val = val;
        this->left = this->right = NULL;/*左右无子树*/
    }
};

class Solution {
public:
    /*
     * @param root: the root of binary tree
     * @param target: An integer
     * @return: all valid paths
     */
    vector<vector<int>> binaryTreePathSum(TreeNode *root, int target) {
        vector<vector<int>> res;/*结果*/
        if (root == NULL) {/*若是空树*/
            return res;
        }
        vector<int> path;/*路径*/
        dfs(root, target, path, res);/*深度搜索优先*/
        return res;
    }

private:
    void dfs(TreeNode *root, int target, vector<int> &path, vector<vector<int>> &res) {
        if (root == NULL) {/*空节点*/
            return;
        }
        path.push_back(root->val);
        if (root->left == NULL && root->right == NULL) {/*叶节点*/
            if (target == root->val) {
                res.push_back(vector<int>(path));/*新的内存*/
            }
            path.pop_back();/*原内存*/
            return;
        }
        dfs(root->left, target - root->val, path, res);/*非叶节点*/
        dfs(root->right, target - root->val, path, res);
        path.pop_back();
    }
};

int main() {

    return 0;
}
