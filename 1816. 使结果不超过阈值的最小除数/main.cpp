#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/**
 * 解法： 二分答案
 * 算法：二分查找
 * 解题思路
 * 我们可以得到答案的范围是从 0 到 数组和。那么我们可以对这个范围进行二分，然后判断是否范围之间的答案是否小于阈值，然后不断的缩小范围。对于向上取整，可以目标值加上mid - 1 然后除以mid。
 *
 * 复杂度分析
 * 时间复杂度：O（nlogn）
 * n为数组和范围。
 *
 * 空间复杂度：O(1)
 */
class Solution {
public:
    /**
     * @param nums: an array of integers
     * @param threshold: an integer
     * @return: return the smallest divisor
     */
    bool check(vector<int> &nums, int mid, int threshold) {

        int total = 0;
        for (int i = 0; i < nums.size(); i++) total += (nums[i] + mid - 1) / mid;
        if (total <= threshold) return true;
        return false;
    }

    int smallestDivisor(vector<int> &nums, int threshold) {

        int left = 1, right = -1;
        for (int i = 0; i < nums.size(); i++) right = max(right, nums[i]);

        while (left + 1 < right) {
            int mid = (left + right) / 2;
            if (check(nums, mid, threshold)) right = mid;
            else left = mid;
        }
        if (check(nums, left, threshold)) return left;
        return right;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 3, 5, 7, 11};
    cout << solution.smallestDivisor(nums, 11);
    return 0;
}
