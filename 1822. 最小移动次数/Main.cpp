#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
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
	 * @param S: a string
	 * @return:  return the minimum number of moves
	 */
	int MinimumMoves(string& S) {
		int answer = 0, index = 0, eIndex = -1, letterCount = 0;
		while (index < S.size()) {
			eIndex = index + 1;
			while (eIndex < S.size() && S[index] == S[eIndex]) {
				eIndex++;
			}
			letterCount = eIndex - index;
			if (letterCount >= 3) {
				while (letterCount > 5) {
					letterCount -= 3;
					answer++;
				}
				if (letterCount <= 5) {
					answer++;
				}
			}
			index = eIndex;
		}
		return answer;
	}
};
int main()
{
	Solution solution;
	string S = "baaaaa";
	cout << solution.MinimumMoves(S);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}