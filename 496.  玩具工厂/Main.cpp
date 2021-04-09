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
fstream fout("OUTPUT.dat", ios::out);
/**
 * Your object will be instantiated and called as such:
 * ToyFactory* tf = new ToyFactory();
 * Toy* toy = tf->getToy(type);
 * toy->talk();
 */
class Toy {
public:
	virtual void talk() const = 0;
};

class Dog : public Toy {
	void talk()const {
		fout << "Wow" << endl;
	}
};

class Cat : public Toy {
	void talk()const {
		fout << "Meow" << endl;
	}
};

class ToyFactory {
public:
	/**
	 * @param type a string
	 * @return Get object of the type
	 */
	Toy* getToy(string& type) {
		if (type == "Dog") {
			return new Dog();
		}
		else if (type == "Cat") {
			return new Cat();
		}
		return NULL;
	}
};
int main()
{
	string str = "Cat";
	ToyFactory tf = ToyFactory();
	Toy* toy = tf.getToy(str);
	toy->talk();
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}