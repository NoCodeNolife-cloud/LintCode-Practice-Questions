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
class Solution {
public:
	/**
	 * @param color: the given color
	 * @return: a 7 character color that is most similar to the given color
	 */
	string similarRGB(string& color) {
		char A = color[1];
		char B = color[2];
		char C = color[3];
		char D = color[4];
		char E = color[5];
		char F = color[6];
		char X = getSimilar(A, B), Y = getSimilar(C, D), Z = getSimilar(E, F);
		string res = "#";
		res.push_back(X);
		res.push_back(X);
		res.push_back(Y);
		res.push_back(Y);
		res.push_back(Z);
		res.push_back(Z);
		return res;
	}
	char getSimilar(char A, char B) {
		int numA;
		if (A >= 'a') {
			numA = A - 'a' + 10;
		}
		else {
			numA = A - '0';
		}
		int numB;
		if (B >= 'a') {
			numB = B - 'a' + 10;
		}
		else {
			numB = B - '0';
		}
		int res = 0;
		int tempX = 0;
		int max = -pow(((numA * 16 + numB) - (tempX * 16 + tempX)), 2);
		do {
			++tempX;
			int maxtemp = -pow(((numA * 16 + numB) - (tempX * 16 + tempX)), 2);
			if (maxtemp > max) {
				max = maxtemp;
				res = tempX;
			}
		} while (tempX != 15);
		if (res >= 10) {
			res = res - 10;
			return res + 'a';
		}
		else {
			return res + '0';
		}
	}
};
int main()
{
	Solution solution;
	string color = "#09f166";
	cout << solution.similarRGB(color);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}