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
	/*
	 * @param A: A list of integers
	 * @param elem: An integer
	 * @return: The new length after remove
	 */
	int removeElement(vector<int>& A, int elem) {
		for (int i = 0; i < A.size();) {
			if (A[i] == elem) {
				A.erase(A.begin() + i);
			}
			else {
				i++;
			}
		}
		return A.size();
	}
};
int main()
{
	vector<int>A = {
		0,4,4,0,0,2,4,4
	};
	Solution solution;
	cout << solution.removeElement(A, 4);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}