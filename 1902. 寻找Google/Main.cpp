#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
class Solution {
public:
	/**
	 * @param S: The c++ file
	 * @return: return if there is "Google" in commet line
	 */
	bool FindGoogle(vector<string>& S) {
		for (int i = 0; i < S.size(); i++) {
			if (S[i].find("Google") == string::npos) {
				continue;
			}
			if (S[i].find("//") != string::npos) {
				return true;
			}
			bool sign = false;
			for (int j = 0; j <= i; j++) {
				if (S[j].find("/*") != string::npos and S[j].find("//") == string::npos) {
					sign = true;
				}
				if (S[j].find("*/") != string::npos and sign == true and S[j].find("//") == string::npos) {
					sign = false;
				}
			}
			if (sign) {
				return true;
			}
		}
		return false;
	}
};
using namespace std;
int main()
{
	Solution solution;
	vector<string>S = {
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}