#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param position: the position of circle A,B and point P.
	 * @return: if two circle intersect return 1, otherwise -1.
	 */
	typedef struct point {
		double x, y;
	}point;
	double xmult(point B, point C, point A) {
		return (B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y);
	}
	double distance(point A, point B) {
		return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
	}
	double dis_ptoline(point A, point B, point C) {
		return fabs(xmult(A, B, C)) / distance(B, C);
	}
	int IfIntersect(vector<double>& position) {
		point A, B, P, M;
		double ra, rb;
		double dmin, dmax;
		A.x = position[0];//initialize
		A.y = position[1];
		ra = position[2];
		B.x = position[3];
		B.y = position[4];
		rb = position[5];
		P.x = position[6];
		P.y = position[7];
		M.x = B.x - (P.y - A.y), M.y = B.y + (P.x - A.x);
		if (xmult(A, B, M) * xmult(B, P, M) >= 0) {
			if (A.x == P.x && A.y == P.y) {
				dmin = distance(B, A);
			}
			else {
				dmin = dis_ptoline(B, A, P);
			}
		}
		else {
			dmin = min(distance(A, B), distance(P, B));
		}
		dmax = max(distance(A, B), distance(P, B));
		if (dmin > ra + rb || dmax < fabs(ra - rb)) {
			return -1;
		}
		return 1;
	}
};
int main()
{
	vector<double>position = { 2,0,1,2,2,0.4,0,2 };
	Solution solution;
	cout << solution.IfIntersect(position) << endl;
	system("pause");
	return 0;
}