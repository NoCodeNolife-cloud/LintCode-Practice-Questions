#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::boolalpha;

class Solution {
public:
	/**
	 * @param circles: The value of 6 points on n rings
	 * @return: Whether there are two same circles
	 */
	bool samecircle ( vector<vector<int>>& circles ) {
		for ( int i = 0; i < circles.size (); ++i ) {
			for ( int j = i + 1; j < circles.size (); ++j ) {
				if ( ifequal ( circles [ j ] , circles [ i ] ) ) {
					return true;
				}
			}
		}
		return false;
	}

	bool ifequal ( vector<int> vec_a , vector<int> vec_b ) {
		for ( int i = 0; i < vec_a.size (); ++i ) {
			rotate ( vec_a );
			if ( vec_a == vec_b ) {
				return true;
			}
		}
		return false;
	}

	void rotate ( vector<int>& vec ) {
		int tmp = vec [ 0 ];
		vec.erase ( vec.begin () );
		vec.push_back ( tmp );
		return;
	}
};

int main () {
	Solution solution;
	vector<int> vec1 = { 2,3,5,4 };
	vector<int> vec2 = { 2,3,5,4 };
	vector<vector<int>>coll = { vec1,vec2 };

	cout << boolalpha << solution.samecircle ( coll ) << endl;

	system ( "PAUSE" );
	return 0;
}