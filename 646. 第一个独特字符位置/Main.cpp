#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Solution {
public:
	struct Node {
		char chara;
		bool findequal;
		int index;
	};
	/**
	 * @param s: a string
	 * @return: it's index
	 */
	int firstUniqChar(string& s) {
		if (s.size() == 0) {
			return -1;
		}
		else if (s.size() == 1) {
			return 0;
		}
		else {
			vector<Node> count;
			Node temp;
			temp.chara = s[0];
			temp.findequal = false;
			temp.index = 0;
			count.push_back(temp);
			for (int i = 1; i < s.size(); i++) {
				bool find = false;
				for (int j = 0; j < count.size(); j++) {
					if (count[j].chara == s[i]) {
						find = true;
						count[j].findequal = true;
					}
				}
				if (!find) {
					temp.chara = s[i];
					temp.findequal = false;
					temp.index = i;
					count.push_back(temp);
				}
			}
			for (int i = 0; i < count.size(); i++) {
				if (count[i].findequal == false) {
					return count[i].index;
				}
			}
			return -1;
		}
	}
};
int main()
{
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}