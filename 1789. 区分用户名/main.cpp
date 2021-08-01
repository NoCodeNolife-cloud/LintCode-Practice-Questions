#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    /**
     * @param names: a string array
     * @return: the string array
     */
    vector<string> DistinguishUsername(vector<string> &names) {
        vector<string> res;
        map<string, int> cnt;
        for (string str:names) {
            if (cnt.find(str) != cnt.end()) {
                cnt[str]++;
            } else {
                cnt[str] = 1;
            }
            string temp = str;
            if (cnt[str] != 1) {
                string tail = to_string(cnt[str] - 1);
                temp += tail;
            }
            res.push_back(temp);
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<string> names = {"ab", "a", "ab", "bc", "b", "ca", "bb", "c", "a", "ac", "cb", "ca", "a", "ca", "a", "c", "c", "bc", "ba", "c", "cc", "cc", "c", "b", "ca", "ac", "bc", "bb", "c", "bb", "b", "a", "c", "ac", "c", "a", "ac", "ca", "a", "a", "ab", "cb", "c", "a", "bc", "a", "ab", "cb", "bb", "a", "cb", "c", "bb", "cb", "bc", "ab", "cb", "c", "cc", "a", "a", "bb", "c", "ba", "aa", "c", "b", "b", "ca", "b", "aa", "ac", "b", "b", "c", "a", "ba", "c", "c", "c", "b", "c", "c", "ca", "ab", "ba", "ac", "ac", "b", "cb", "ab", "ab", "b", "b", "b", "ca", "aa", "b", "ca", "a"};
    vector<string> res = solution.DistinguishUsername(names);
    for (string item:res) {
        cout << item << endl;
    }
    return 0;
}
