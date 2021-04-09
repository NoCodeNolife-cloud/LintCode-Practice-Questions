#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/*
	 * @param nums: a list of integers
	 * @return: find a  majority number
	 */
	int majorityNumber(vector<int>& nums) {
		vector<pair<int, int>>count;//save the counts
		pair<int, int>temp(nums[0], 1);//temp to save
		count.push_back(temp);//push the first data
		for (int i = 1; i < nums.size(); i++) {
			int flags = 0;//set the fags that flags=1 indicate that the num[i] is not in count
			for (int j = 0; j < count.size(); j++) {
				if (nums[i] == count[j].first) {
					flags = 1;//nums[i] is found in count
					count[j].second++;
				}
			}
			if (flags == 0) {//if nums[i] not in count
				temp.first = nums[i];//save the difference number
				temp.second = 1;//initialize the count number
				count.push_back(temp);
			}
		}
		double size = nums.size() / 2.0;//the priority number offset
		for (int i = 0; i < count.size(); i++) {//check for all value
			if (count[i].second > size) {
				return count[i].first;
			}
		}
	}
};
int main()
{
	vector<int>nums = { 1, 2, 1, 2, 1, 2, 2 };
	Solution solution;
	cout << solution.majorityNumber(nums) << endl;
	system("pause");
	return 0;
}