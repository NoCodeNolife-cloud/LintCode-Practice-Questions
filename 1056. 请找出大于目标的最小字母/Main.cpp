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
class Solution {
public:
	/**
	 * @param letters: a list of sorted characters
	 * @param target: a target letter
	 * @return: the smallest element in the list that is larger than the given target
	 */
	char nextGreatestLetter(string& letters, char target) {
		sort(letters.begin(), letters.end(), less<char>());
		for (int i = 0; i < letters.size(); i++) {
			if (target < letters[i]) {
				return letters[i];
			}
		}
		return letters[0];
	}
};
int main()
{
	string letters = "cfj";
	char target = 'a';
	Solution solution;
	cout << solution.nextGreatestLetter(letters, target);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}