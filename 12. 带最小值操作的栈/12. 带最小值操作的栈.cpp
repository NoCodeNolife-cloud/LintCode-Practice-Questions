#include <iostream>
#include <stack>
using namespace std;
class MinStack {
public:
	stack<int> s1;
	stack<int> s2;
	MinStack() {

		// do intialization if necessary
	}

	/*
	 * @param number: An integer
	 * @return: nothing
	 */
	void push(int number) {

		// write your code here
		s1.push(number);
		if (!s2.empty()) {
			int temp = s2.top();
			if (number < temp) {
				s2.push(number);
			}
			else {
				s2.push(temp);
			}
		}
		else {
			s2.push(number);
		}
	}

	/*
	 * @return: An integer
	 */
	int pop() {

		// write your code here
		int temp = s1.top();
		s1.pop();
		s2.pop();
		return temp;
	}

	/*
	 * @return: An integer
	 */
	int min() {

		// write your code here
		return s2.top();
	}
}; int main()
{
	MinStack minstack;
	minstack.push(3);
	minstack.push(4);
	minstack.push(5);
	minstack.push(6);
	minstack.push(1);
	cout << minstack.min();
	return 0;
}