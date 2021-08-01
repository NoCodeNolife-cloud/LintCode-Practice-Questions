#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @param nums: the integers to be paired.
     * @return: return the minimum difference of the maximum value and the minimum value after pairing.
     */
    int digitalPairing(vector<int> &nums) {
        if (nums.size() <= 2) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int maxval = INT_MIN;
        int minval = INT_MAX;
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int pair = nums[left] + nums[right];
            maxval = max(maxval, pair);
            minval = min(minval, pair);
            left++;
            right--;
        }
        return abs(maxval - minval);
    }
};

int main() {
    Solution solution;
    vector<int> vec = {2, 3, 5, 1};
    cout << solution.digitalPairing(vec);
    return 0;
}
