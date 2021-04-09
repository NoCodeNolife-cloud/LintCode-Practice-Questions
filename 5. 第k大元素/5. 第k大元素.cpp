#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	/**
	 * @param n: An integer
	 * @param nums: An array
	 * @return: the Kth largest element
	 */
	int kthLargestElement(int k, vector<int>& nums) {
		int n = nums.size();
		k = n - k;
		return partition(nums, 0, n - 1, k);
	}
	int partition(vector<int>& nums, int start, int end, int k) {
		int left = start, right = end;
		int pivot = nums[left];
		while (left <= right) {
			while (left <= right and nums[left] < pivot) {
				left++;
			}
			while (left <= right and nums[right] > pivot) {
				right--;
			}
			if (left <= right) {
				swap(nums[left], nums[right]);
				left++;
				right--;
			}
		}
		if (k <= right) {
			return partition(nums, start, right, k);
		}
		if (k >= left) {
			return partition(nums, left, end, k);
		}
		return nums[k];
	}
};

int main()
{
	Solution solution;
	vector<int> nums = { 9,3,2,4,8 };
	cout << solution.kthLargestElement(3, nums);
	return 0;
}