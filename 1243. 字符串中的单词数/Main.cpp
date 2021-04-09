#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
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
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
class Solution {
public:
	/**
	 * @param s: a string
	 * @return: the number of segments in a string
	 */
	int countSegments(string& s) {
		istringstream ss(s);
		string str;
		int res = 0;
		while (ss >> str) {
			res++;
		}
		return res;
	}
};
using namespace std;
int main()
{
	Solution solution;
	string str = "Hello, my name is John";
	cout << solution.countSegments(str);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}