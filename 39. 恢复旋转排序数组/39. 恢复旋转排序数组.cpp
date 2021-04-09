#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param nums: An integer array
	 * @return: nothing
	 */

	 //this is my version
	 //void recoverRotatedSortedArray(vector<int>& nums) {
	 //	int maxindex = -1;
	 //	int size = nums.size();
	 //	for (int i = 0; i < size - 1; i++) {
	 //		if (nums[i] > nums[i + 1]) {//find the item at the end of the sequence
	 //			maxindex = i;
	 //			break;
	 //		}
	 //	}
	 //	if (maxindex == -1) {//if don't need to change
	 //		return;
	 //	}
	 //	vector<int>temp;
	 //	for (int i = maxindex + 1; i < size; i++) {
	 //		temp.push_back(nums[i]);
	 //	}
	 //	for (int i = 0; i <= maxindex; i++) {
	 //		temp.push_back(nums[i]);
	 //	}
	 //	nums = temp;
	 //	return;
	 //}

	//the answer
	int getGCD(int a, int b) {//get the greatest common divisor
		if (a % b == 0) {
			return b;
		}
		return getGCD(b, a % b);//lterative method
	}
	void recoverRotatedSortedArray(vector<int>& nums) {//the algorithm
		int offset = 0;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i - 1] > nums[i]) {
				offset = i;
			}
		}
		if (offset == 0) {
			return;
		}
		offset = nums.size() - offset;
		int gcd = getGCD(offset, nums.size());
		for (int i = 0; i < gcd; i++) {
			int next = (i + offset) % nums.size();
			while (next != i) {
				int temp = nums[i];
				nums[i] = nums[next];
				nums[next] = temp;
				next = (next + offset) % nums.size();
			}
		}
		return;
	}
};
int main()
{
	Solution solution;
	vector<int>vec = { 6,8,9,1,2 };
	solution.recoverRotatedSortedArray(vec);
	for (int x : vec) {
		cout << x << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}