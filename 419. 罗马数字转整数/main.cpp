#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> cop;
        cop['I'] = 1;
        cop['V'] = 5;
        cop['X'] = 10;
        cop['L'] = 50;
        cop['C'] = 100;
        cop['D'] = 500;
        cop['M'] = 1000;

        int ans = cop[s[0]];
        for (int i = 1; i < s.size(); i++) {
            ans += cop[s[i]];
            if (cop[s[i]] > cop[s[i - 1]])
                ans -= 2 * cop[s[i - 1]];
        }
        return ans;
    }
};

int main() {
    Solution solution;
    cout << solution.romanToInt("1187");
    return 0;
}
