#include <vector>
#include <iostream>
using namespace std;
class MyContainer {
public:
	vector<int>vec;
	/**
	 * @param element: Add element into this container.
	 * @return: nothing
	 */
	void add(int element) {
		vec.push_back(element);
	}

	/**
	 * @return: Sum of integers.
	 */
	int getSum() {
		int res = 0;
		for (int i = 0; i < vec.size(); i++) {
			res += vec[i];
		}
		return res;
	}
};
int main()
{
	MyContainer contain;
	contain.add(1);
	contain.add(2);
	cout << contain.getSum() << endl;
	contain.add(4);
	cout << contain.getSum() << endl;
	system("pause");
	return 0;
}