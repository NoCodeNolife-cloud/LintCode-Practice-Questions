#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param s: the given string
     * @return: all the possible states of the string after one valid move
     */
    vector<string> generatePossibleNextMoves(string &s) {
        vector<string> res;
        int i = 0;
        int j;
        while ((j = s.find_first_of("+", i)) != string::npos) {
            if (s[j + 1] == '+') {
                string temp = s;
                temp[j] = temp[j + 1] = '-';
                res.push_back(temp);
                i = j + 1;
            } else {
                i++;
            }
        }
        return res;
    }

    /**
     * @param s: the given string
     * @return: all the possible states of the string after one valid move
     */
    vector<string> generatePossibleNextMoves1(string &s) {
        vector<string> res;
        if(s.empty()){
            return res;
        }
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '+' and s[i + 1] == '+') {
                string temp = s;
                temp[i] = temp[i + 1] = '-';
                res.push_back(temp);
            }
        }

        return res;
    }
};

int main() {
    Solution solution;
    string s = "---+++-+++-+";
    vector<string> res = solution.generatePossibleNextMoves1(s);
    for (auto item:res) {
        cout << item << endl;
    }
    return 0;
}
