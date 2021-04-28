#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	 * @param words: the given list of words
	 * @return: the number of different transformations among all words we have
	 */
	int uniqueMorseRepresentations ( vector<string>& words ) {
		string cnt [] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
		set<string> coll;
		for ( string item : words ) {
			string tmp;
			for ( int i = 0; i < item.size (); ++i ) {
				tmp += cnt [ item [ i ] - 'a' ];
			}
			coll.insert ( tmp );
		}
		return coll.size ();
	}
};

int main () {
	Solution solution;
	vector<string> words = { "gin", "zen", "gig", "msg" };
	cout << solution.uniqueMorseRepresentations ( words ) << std::endl;
	system ( "PAUSE" );
}