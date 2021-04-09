#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Solution {
public:
	/**
	 * @param text: the text to print
	 * @param width: the width of the window
	 * @return: return the result of pretty print.
	 */
	vector<string> prettyPrint(vector<vector<string>>& text, int width) {
		vector<string> res;
		string temp(width + 2, '*');
		res.push_back(temp);
		temp.clear();
		temp += '*';
		int restwidth = width;
		for (int i = 0; i < text.size(); i++) {
			for (int j = 0; j < text[i].size(); ) {
				if (text[i][j].size() <= restwidth) {
					temp += text[i][j];
					restwidth -= text[i][j].size();
					j++;
					if (restwidth != 0) {
						temp += ' ';
						restwidth--;
					}
				}
				else {
					while (restwidth > 0) {
						temp += ' ';
						restwidth--;
					}
					temp += '*';
					res.push_back(temp);
					temp.clear();
					temp += '*';
					restwidth = width;
				}
			}
			while (restwidth > 0) {
				temp += ' ';
				restwidth--;
			}
			temp += '*';
			res.push_back(temp);
			temp.clear();
			temp += '*';
			restwidth = width;
		}
		temp.clear();
		for (int i = 0; i < width + 2; i++) {
			temp += '*';
		}
		res.push_back(temp);
		temp.clear();
		return res;
	}
};
int main()
{
	vector<string>temp = {
		"hello","world"
	};
	vector<vector<string>>text;
	text.push_back(temp);
	temp.clear();
	temp = {
		"I","love","cats","and","dogs"
	};
	text.push_back(temp);
	temp.clear();
	Solution solution;
	vector<string>res = solution.prettyPrint(text, 12);
	for (string x : res) {
		cout << x << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}