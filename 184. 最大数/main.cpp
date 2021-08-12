#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @param nums: A list of non negative integers
     * @return: A string
     */
    string largestNumber(vector<int> &nums) {
        string res;
        vector<string> temp;
        for (int item:nums) {
            temp.push_back(to_string(item));
        }
        sortVector(temp);
        for (string item:temp) {
            res += item;
        }
        if (atoi(res.c_str()) == 0) {
            return "0";
        }
        return res;
    }

    void sortVector(vector<string> &vec) {
        for (int i = 0; i < vec.size(); i++) {
            for (int j = 0; j < vec.size() - i - 1; j++) {
                if (vec[j + 1] + vec[j] > vec[j] + vec[j + 1]) {
                    swap(vec[j + 1], vec[j]);
                }
            }
        }
    }
};


int main() {
    Solution solution;
    vector<int> nums = {4, 6, 65 };
    cout << solution.largestNumber(nums);
    return 0;
}
