#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	/**
	 * @param J: the types of stones that are jewels
	 * @param S: representing the stones you have
	 * @return: how many of the stones you have are also jewels
	 */
	int numJewelsInStones(string& J, string& S) {
		int res = 0;
		for (int i = 0; i < J.size(); i++) {
			for (int j = 0; j < S.size(); j++) {
				if (J[i] == S[j]) {
					res++;
				}
			}
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string J = "aA";
	string S = "aAAbbbb";
	cout << solution.numJewelsInStones(J, S) << endl;
	system("pause");
	return 0;
}