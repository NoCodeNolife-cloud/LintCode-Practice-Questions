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
	/**
	 * @param N: a number
	 * @return: the number of prime numbers.
	 */
	int Count_PrimeNum(int N) {
		int ans = 0;
		bool vis[100005];
		int prime[100005];
		memset(vis, 0, sizeof(vis));
		for (int i = 2; i <= N; i++) {
			prime[i] = 1;
		}
		for (int i = 2; i <= N; i++) {
			ans += prime[i];
			for (int j = 2; i * j <= N && j <= i; j++) {
				if (vis[i * j]) {
					continue;
				}
				vis[i * j] = 1;
				prime[i * j] = prime[i] + prime[j];
			}
		}
		return ans;
	}
};
int main()
{
	Solution solution;
	cout << solution.Count_PrimeNum(4);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}