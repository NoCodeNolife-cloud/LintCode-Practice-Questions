#include <iostream>
#include <vector>
using namespace std;
class MyContainerII {
public:
	vector<int>vec;
	MyContainerII() {

		// initialize your data structure here
	}

	/**
	 * @param element: Add element into this container.
	 * @return: nothing
	 */
	void add(int element) {
		bool flag = true;
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] == element) {
				return;
			}
		}
		vec.push_back(element);
	}

	/**
	 * @param element: Remove element into this container.
	 * @return: nothing
	 */
	void remove(int element) {
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] == element) {
				vec.erase(vec.begin() + i);
			}
		}
	}

	/**
	 * @return: Sum of integers.
	 */
	int getSum() {
		int res = 0;
		vector<int>::iterator iter;
		for (iter = vec.begin(); iter != vec.end(); iter++) {
			res += *iter;
		}
		return res;
	}
};
int main()
{
	MyContainerII contain;
	contain.add(5);
	contain.add(10);
	contain.remove(7);
	contain.add(5);
	cout << contain.getSum() << endl;
	cout << contain.getSum() << endl;
	contain.add(9);
	contain.remove(10);
	cout << contain.getSum() << endl;
	system("pause");
	return 0;
}