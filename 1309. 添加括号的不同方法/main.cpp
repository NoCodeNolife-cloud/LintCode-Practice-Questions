#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @param input: a string
     * @return: return List[int]
     */
    int toInt(string s) {

        int sum = 0;
        for (auto t : s) {
            sum = sum * 10 + (t - '0');
        }
        return sum;
    }

    vector<int> diffWaysToCompute(string &input) {

        vector<int> answer;
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '-' ||
                input[i] == '*' ||
                input[i] == '+') {
                string part1 = input.substr(
                        0, i);
                string part2 = input.substr(i + 1);
                vector<int> part1Ret = diffWaysToCompute(part1);
                vector<int> part2Ret = diffWaysToCompute(part2);
                for (auto p1 :   part1Ret) {
                    for (auto p2 :   part2Ret) {
                        int sum = 0;
                        switch (input[i]) {
                            case '+':
                                sum = p1 + p2;
                                break;
                            case '-':
                                sum = p1 - p2;
                                break;
                            case '*':
                                sum = p1 * p2;
                                break;
                        }
                        answer.push_back(sum);
                    }
                }
            }
        }
        if (answer.size() == 0) {
            answer.push_back(toInt(input));
        }
        sort(answer.begin(), answer.end());
        return answer;
    }
};

int main() {
    Solution solution;
    string str = "2*3-4*5";
    vector<int> res = solution.diffWaysToCompute(str);
    for (vector<int>::iterator iter = res.begin(); iter != res.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
