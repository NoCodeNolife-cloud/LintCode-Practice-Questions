#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    /**
     * @param aString: letter string
     * @return: the Minimum times
     */
    int Kstart(string &aString) {
        int charCnt[26] = {0};
        for (char &c : aString) {
            ++charCnt[c - 'a'];
        }
        map<int, int, greater<int>> cntMap;
        for (int &cnt : charCnt) {
            if (cnt > 0) ++cntMap[cnt];
        }

        int res = 0;
        while (!cntMap.empty()) {
            auto it = cntMap.begin();
            const int h = it->first, cnt = it->second;
            if (h == 1) {
                res += cnt - 1;
                break;
            }
            cntMap.erase(it);

            for (int i = 1; i < cnt; res += i++) {
                ++cntMap[h - i];
            }
        }

        return res;
    }
};

int main() {
    Solution solution;
    string str = "aaabbb";
    cout << solution.Kstart(str);
    return 0;
}
