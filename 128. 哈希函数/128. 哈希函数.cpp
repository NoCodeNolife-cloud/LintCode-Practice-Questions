#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param key: A string you should hash
	 * @param HASH_SIZE: An integer
	 * @return: An integer
	 */
	int hashCode(string& key, int HASH_SIZE) {
		vector<long long>hash;
		hash.push_back(1);
		for (int i = 1; i < key.size(); i++) {
			hash.push_back((hash[i - 1] * 33) % HASH_SIZE);
		}
		long long res = 0;
		for (int i = 0; i < key.size(); i++) {
			res += int(key[i]) * hash[key.size() - 1 - i];
			res %= HASH_SIZE;
		}
		return res;
	}
};
int main()
{
	Solution solution;
	string str = "abcd";
	cout << solution.hashCode(str, 100) << endl;
	system("pause");
	return 0;
}