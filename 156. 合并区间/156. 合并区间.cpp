#include <iostream>
#include <vector>
using namespace std;
class Interval {
public:
	int start, end;
	Interval(int start, int end) {
		this->start = start;
		this->end = end;
	}
};
class Solution {
public:
	/**
	 * @param intervals: interval list.
	 * @return: A new interval list.
	 */
	vector<Interval> merge(vector<Interval>& intervals) {
		if (intervals.size() == 1 or intervals.size() == 0) {
			return intervals;
		}
		Sort(intervals);
		vector<Interval>res;
		int left = intervals[0].start, right = intervals[0].end;
		for (int i = 1; i < intervals.size(); i++) {
			if (intervals[i].start < right and intervals[i].end>right) {
				right = intervals[i].end;
			}
			else if (intervals[i].start > right) {
				Interval temp(left, right);
				res.push_back(temp);
				left = intervals[i].start;
				right = intervals[i].end;
			}
			else if (intervals[i].start == right and left < intervals[i].end) {
				right = intervals[i].end;
			}
			if (i == intervals.size() - 1) {
				Interval temp(left, right);
				res.push_back(temp);
			}
		}
		return res;
	}
	void Sort(vector<Interval>& intervals) {
		for (int i = 0; i < intervals.size(); i++) {
			for (int j = 0; j < intervals.size() - 1 - i; j++) {
				if (intervals[j].start > intervals[j + 1].start) {
					swap(intervals[j], intervals[j + 1]);
				}
			}
		}
	}
};
int main()
{
	Solution solution;
	vector<Interval> intervals;
	Interval temp(1, 4);
	intervals.push_back(temp);
	Interval temp2(0, 2);
	intervals.push_back(temp2);
	Interval temp3(3, 5);
	intervals.push_back(temp3);
	vector<Interval> res = solution.merge(intervals);
	for (Interval x : res) {
		cout << "(" << x.start << "," << x.end << ")\n";
	}
	system("pause");
	return 0;
}