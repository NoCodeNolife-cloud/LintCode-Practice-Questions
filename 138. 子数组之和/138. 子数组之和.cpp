#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
#include <unordered_map>
using namespace std;

//class Solution {
//public:
//	/**
//	 * @param nums: A list of integers
//	 * @return: A list of integers includes the index of the first number and the index of the last number
//	 */
//	vector<int> subarraySum(vector<int>& nums) {
//		vector<int>res;
//		for (int length = 1; length <= nums.size(); length++) {
//			for (int i = 0; i <= nums.size() - length - 1; i++) {
//				if (arraySum(nums, i, i + length) == 0) {
//					res.push_back(i);
//					res.push_back(i + length);
//					return res;
//				}
//			}
//		}
//	}
//	/**
//	 * @brief get the sum between m and n
//	 * @param nums
//	 * @param m
//	 * @param n
//	 * @return
//	*/
//	long arraySum(vector<int>& nums, int m, int n) {
//		long res = 0;
//		for (int i = m; i <= n; i++) {
//			res += nums[i];
//		}
//		return res;
//	}
//};
class Solution {
public:
	/**
	 * @param nums: A list of integers
	 * @return: A list of integers includes the index of the first number and the index of the last number
	 */
	vector<int> subarraySum(vector<int>& nums) {
		vector<int>result;
		unordered_map<int, int>hash;
		hash[0] = -1;
		int sum = 0;
		for (int i = 0; i < nums.size(); i++) {

			//累加前缀和
			sum += nums[i];

			//前缀和曾经出现，即这个区间的和为0
			if (hash.find(sum) != hash.end()) {
				result.push_back(hash[sum] + 1);
				result.push_back(i);
				break;
			}

			//前缀和第一次出现，存入hash
			hash[sum] = i;
		}
		return result;
	}
};
int main()
{
	vector<int>vec = { -3, 1, -4, 2, -3, 4 };
	Solution solution;
	vector<int>res = solution.subarraySum(vec);
	for (int i : res) {
		cout << setw(2) << left << i;
	}
	system("pause");
	return 0;
}