#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	/**
	 * @param record: Attendance record.
	 * @return: If the student should be punished return true, else return false.
	 */
	bool judge(string& record) {
		if (record.find("LLL") != string::npos) {
			return true;
		}
		int delay = 0;
		for (int i = 0; i < record.size(); i++) {
			if (record[i] == 'D') {
				delay++;
				if (delay == 2) {
					return true;
				}
			}
		}
		return false;
	}
};
int main()
{
	Solution solution;
	string str = "AADALLAAL";
	if (solution.judge(str)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	system("pause");
	return 0;
}