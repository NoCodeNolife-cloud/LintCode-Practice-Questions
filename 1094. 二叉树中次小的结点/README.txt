描述
给定一个非空的特别的结点包含非负值二叉树，其中树中的每一个节点包含正好两个或者零个子结点。如果这个结点有两个子结点，那么这个结点的值不大于它的两个子结点。

对于这样一个二叉树，你需要输出由整个树当中的结点值构成的集合中的次小值。

如果不存在这样的一个次小值，输出-1作为替代。

样例
样例1:

输入:
    2
   / \
  2   5
     / \
    5   7

输出: 5
解释: 最小的值是2，次小值是5.
样例2:

输入:
    2
   / \
  2   2

输出: -1
解释: 最小值是2，但是没有次小值.