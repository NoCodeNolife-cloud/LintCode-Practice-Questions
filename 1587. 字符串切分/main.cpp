#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param str: the string need to be processed
     * @return: all the valid key-value pairs.
     */
    vector<vector<string>> StringSeg(string &str) {
        vector<vector<string>> res;
        char split = str[0];
        char dive_split = str[1];
        str.erase(str.begin(), str.begin() + 2);
        while (str.size() != 0) {
            string temp_key_value;
            if (str.find(split) != string::npos) {
                temp_key_value = str.substr(0, str.find_first_of(split));
                str.erase(0, str.find_first_of(split) + 1);
            } else {
                temp_key_value = str;
                str = "";
            }
            string temp_key, temp_value;
            if (temp_key_value.find(dive_split) != string::npos) {
                temp_key = temp_key_value.substr(0, temp_key_value.find(dive_split));
                temp_value = temp_key_value.substr(temp_key_value.find(dive_split) + 1, string::npos);
                if (!temp_key.empty() and !temp_value.empty()) {
                    vector<string> temp_vec = {temp_key, temp_value};
                    res.push_back(temp_vec);
                }
            }
        }
        return res;
    }
};

int main() {
    Solution solution;
    string str = ".*bpifgr*046877800.qkya*84.jmtwxhnvg*.macqsvx*8.ewwhntv*428201042.qbnasw*247631234.*12311806.jpcmco*2376.q*80771.";
    vector<vector<string>> res = solution.StringSeg(str);
    for (auto item:res) {
        for (auto item_in:item) {
            cout << item_in << "  ";
        }
        cout << endl;
    }
    return 0;
}
