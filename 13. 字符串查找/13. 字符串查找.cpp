#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	/**
	 * @param source:
	 * @param target:
	 * @return: return the index
	 */
	int strStr(string& source, string& target) {
		return source.find(target);
	}
};

int main()
{
	string A = "abc";
	string B = "bc";
	Solution solution;
	cout << solution.strStr(A, B);
	return 0;
}