#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param originalString: a string
	 * @return: a compressed string
	 */
	string compress(string& originalString) {
		if (originalString.length() == 0) {
			return "";
		}
		string res;
		res.push_back(originalString[0]);
		int count = 1;
		for (int i = 1; i < originalString.size(); i++) {
			if (res[res.size() - 1] == originalString[i]) {
				count++;
			}
			else {
				string str;
				while (count != 0) {
					char temp = count % 10 + '0';
					count /= 10;
					str.push_back(temp);
				}
				reverse(str.begin(), str.end());
				res += str;
				str.clear();
				count = 1;
				res.push_back(originalString[i]);
			}
			if (i == originalString.size() - 1) {
				string str;
				while (count != 0) {
					char temp = count % 10 + '0';
					count /= 10;
					str.push_back(temp);
				}
				reverse(str.begin(), str.end());
				res += str;
				str.clear();
			}
		}
		if (res.length() >= originalString.length()) {
			return originalString;
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string str = "aaaaagooooogllletesttttttttswsssssssssssss";
	cout << solution.compress(str) << endl;
	system("pause");
	return 0;
}