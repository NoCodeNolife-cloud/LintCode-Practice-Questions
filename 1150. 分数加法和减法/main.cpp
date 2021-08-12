#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param expression: a string
     * @return: return a string
     */
    string fractionAddition(string &expression) {
        string res;
        vector<vector<int>> cnt = split(expression);
        int count1 = cnt[0][0], count2 = cnt[0][1];
        for (int i = 1; i < cnt.size(); i++) {
            if (count2 == cnt[i][1]) {
                count1 += cnt[i][0];
                int time1=gcd(count1,count2);
                count1=count1/time1;
                count2=count2/time1;
            } else {
                int time = lcm(count2, cnt[i][1]);
                count1 = (time / count2) * count1 + (time / cnt[i][1]) * cnt[i][0];
                count2 = time;
                int time1=gcd(count1,count2);
                count1=count1/time1;
                count2=count2/time1;
            }
        }
        if(count1*count2<0){
            count1=-abs(count1);
            count2=abs(count2);
        }
        if (count1 == 0) {
            return "0/1";
        } else {
            res = to_string(count1) + "/" + to_string(count2);
            return res;
        }
    }

    vector<vector<int>> split(string &str) {
        vector<vector<int>> res;
        vector<string> cnt;
        for (int pos = 0, pos1 = 0; pos < str.size(); pos = pos1) {
            pos1 = str.find_first_of("+-", pos + 1);
            if (pos1 == string::npos) {
                string temp(str.begin() + pos, str.end());
                cnt.push_back(temp);
                break;
            }
            string temp(str.begin() + pos, str.begin() + pos1);
            cnt.push_back(temp);
        }
        for (int i = 0; i < cnt.size(); i++) {
            string temp1(cnt[i].begin(), cnt[i].begin() + cnt[i].find_first_of('/'));
            string temp2(cnt[i].begin() + cnt[i].find_first_of('/') + 1, cnt[i].end());
            vector<int> tempvec;
            tempvec.push_back(atoi(temp1.c_str()));
            tempvec.push_back(atoi(temp2.c_str()));
            res.push_back(tempvec);
        }
        return res;
    }

    int lcm(int m, int n) {
        int max = (m > n) ? m : n;
        while (true) {
            if (max % m == 0 && max % n == 0) {
                return max;
            }
            max++;
        }
    }

    int gcd(int a, int b) {
        if (a % b == 0) {
            return b;
        } else {
            gcd(b, a % b);
        }
    }
};

int main() {
    Solution solution;
    string str = "5/3+1/3";
    cout << solution.fractionAddition(str);
    return 0;
}
