#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class MyQueue {
public:
	stack<int> stk;
	MyQueue() {
		// do intialization if necessary
	}

	/*
	 * @param element: An integer
	 * @return: nothing
	 */
	void push(int element) {
		stk.push(element);
	}

	/*
	 * @return: An integer
	 */
	int pop() {
		stack<int> temp;
		int size = stk.size();
		for (int i = 0; i < size; i++) {
			temp.push(stk.top());
			stk.pop();
		}
		int res = temp.top();
		temp.pop();
		size = temp.size();
		for (int i = 0; i < size; i++) {
			stk.push(temp.top());
			temp.pop();
		}
		return res;
	}

	/*
	 * @return: An integer
	 */
	int top() {
		stack<int> temp;
		int size = stk.size();
		for (int i = 0; i < size; i++) {
			temp.push(stk.top());
			stk.pop();
		}
		int res = temp.top();
		size = temp.size();
		for (int i = 0; i < size; i++) {
			stk.push(temp.top());
			temp.pop();
		}
		return res;
	}
};
int main()
{
	MyQueue myqueue;
	myqueue.push(1);
	cout << myqueue.pop();
	myqueue.push(2);
	myqueue.push(3);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}