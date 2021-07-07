#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Solution {
public:
    /**
     * @param stringArray: a string array
     * @return: return every strings'short peifix
     */
    vector<string> ShortPerfix(vector<string> &stringArray) {
        vector<string> res;
        for (int i = 0; i < stringArray.size(); ++i) {
            int index = 0;
            string temp;
            temp += stringArray[i][index++];
            for (int j = 0; j < stringArray.size(); ++j) {
                if (j != i) {
                    while (FindPerfix(temp, stringArray[j])) {
                        temp += stringArray[i][index++];
                        if (temp.length() == stringArray[i].length()) {
                            break;
                        }
                        if (temp.length() == stringArray[j].length()) {
                            temp += stringArray[i][index++];
                            break;
                        }
                    }
                }
            }
            res.push_back(temp);
        }
        return res;
    }

    bool FindPerfix(string str1, string str2) {
        bool equal = true;
        for (int i = 0; i < str1.length() and i < str2.length(); ++i) {
            if (str1[i] != str2[i]) {
                equal = false;
            }
        }
        return equal;
    }
};

int main() {
    vector<string> vec = {"aaa", "bbc", "bcd"};
    Solution solution;
    vector<string> res = solution.ShortPerfix(vec);
    for (string item:res) {
        cout << setw(5) << left << item;
    }
    return 0;
}
