#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/*
	 * @param nums: Given an integers array A
	 * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
	 */
	vector<long long> productExcludeItself(vector<int>& nums) {
		vector<long long>res;
		for (int i = 0; i < nums.size(); i++) {//the number of the res
			long long temp = 1;//the value of the res
			for (int j = 0; j < nums.size(); j++) {//check for all the nums
				if (i != j) {//algorithm of the solution(while i not equal to
					temp *= nums[j];//caculate the result
				}
			}
			res.push_back(temp);//save the temp value
		}//then go to get the next number of the res
		return res;
	}
};
int main()
{
	Solution solution;
	vector<int> tar = { 2,4,6 };
	vector<long long>res = solution.productExcludeItself(tar);
	cout << "[";
	for (int i = 0; i < res.size(); i++) {
		cout << res[i];
		if (i != res.size() - 1) {
			cout << ",";
		}
	}
	cout << "]\n";
	system("pause");
	return 0;
}