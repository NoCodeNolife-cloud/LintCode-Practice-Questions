#include "head.h"

fstream fout("out.txt", ios::out);

int main() {
	vector<int>nums = { 1,3,2,2,5,2,3,7 };
	Solution solution;
	fout << solution.findLHS(nums);
	fout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}