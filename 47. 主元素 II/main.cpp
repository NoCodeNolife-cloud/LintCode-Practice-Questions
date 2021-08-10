#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: The majority number that occurs more than 1/3
     */
    int majorityNumber(vector<int> &nums) {
        map<int, int> cnt;
        for (auto item:nums) {
            cnt[item]++;
        }
        pair<int, int> res(cnt.begin()->first, cnt.begin()->second);
        for (auto iter = ++cnt.begin(); iter != cnt.end(); iter++) {
            if (res.second < iter->second) {
                res.first = iter->first;
                res.second = iter->second;
            }
        }
        return res.first;
    }

    /*
     * @param nums: a list of integers
     * @return: The majority number that occurs more than 1/3
     */
    int majorityNumber1(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        pair<int, int> cnt(nums[0], 1);
        pair<int, int> res = cnt;
        for (int i = 1; 1; i++) {
            if (cnt.first == nums[i]) {
                cnt.second++;
            } else {
                if (res.second < cnt.second) {
                    res.first = cnt.first;
                    res.second = cnt.second;
                }
                cnt.first = nums[i];
                cnt.second = 1;
            }
            if (i == nums.size()) {
                if (res.second < cnt.second) {
                    res.first = cnt.first;
                    res.second = cnt.second;
                }
                break;
            }
        }
        return res.first;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {99, 2, 99, 2, 99, 3, 3};
    cout << solution.majorityNumber(nums) << endl;
    cout << solution.majorityNumber1(nums) << endl;
    return 0;
}
