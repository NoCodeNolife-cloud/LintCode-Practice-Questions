#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
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
#include <stdio.h>
using namespace std;
/*-------------------------------------------------------*/
class Node {
public:
	int val;
	Node* next;
	Node(int _val) {
		val = _val, next = NULL;
	}
};
class MyQueue {
public:
	Node* first, * last;
	MyQueue() {
		first = last = NULL;
	}
	/*
	 * @param item: An integer
	 * @return: nothing
	 */
	void enqueue(int item) {
		if (!first) {
			last = new Node(item);
			first = last;
		}
		else {
			last->next = new Node(item);
			last = last->next;
		}
	}

	/*
	 * @return: An integer
	 */
	int dequeue() {
		if (first != NULL) {
			int item = first->val;
			first = first->next;
			return item;
		}
		return -1;
	}
};
int main()
{
	fstream fout("OUT.dat", ios::out);
	MyQueue myqueue;
	myqueue.enqueue(1);
	myqueue.enqueue(2);
	myqueue.enqueue(3);
	fout << myqueue.dequeue() << endl;
	myqueue.enqueue(4);
	fout << myqueue.dequeue() << endl;
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}