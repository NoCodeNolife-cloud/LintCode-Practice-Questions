#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class MovingAverage {
public:
	int window;
	queue<double>que;
	double sum;
	/*
	* @param size: An integer
	*/MovingAverage(int size) {
		this->window = size;
		this->sum = 0;
	}

	/*
	 * @param val: An integer
	 * @return:
	 */
	double next(int val) {
		this->sum += val;
		if (this->que.size() < this->window) {
			this->que.push(val);
		}
		else {
			this->sum -= this->que.front();
			this->que.pop();
			this->que.push(val);
		}
		return this->sum / this->que.size();
	}
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param = obj.next(val);
 */
int main()
{
	MovingAverage movingaverage(3);
	movingaverage.next(1);
	movingaverage.next(10);
	movingaverage.next(3);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}