#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 * @param board: the board
	 * @return: whether the Sudoku is valid
	 */
	bool isValidSudoku(vector<vector<char>>& board) {
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[0].size(); j++) {
				if (board[i][j] != '.') {
					if (checkForRight(board, i, j)) {
						continue;
					}
					else {
						return false;
					}
				}
			}
		}
		int deq[18] = { 0,0,0,3,0,6,3,0,3,3,3,6,6,0,6,3,6,6 };
		for (int i = 0; i < 9; i++) {
			if (!checkForGrid(board, deq[i * 2], deq[i * 2 + 1])) {
				return false;
			}
		}
		return true;
	}
	bool checkForRight(vector<vector<char>>& board, int a, int b) {
		for (int i = 0; i < board.size(); i++) {
			if (board[i][b] == board[a][b] and i != a) {
				return false;
			}
		}
		for (int i = 0; i < board[0].size(); i++) {
			if (board[a][i] == board[a][b] and i != b) {
				return false;
			}
		}
		return true;
	}
	bool checkForGrid(vector<vector<char>>& board, int a, int b) {
		vector<int>count;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (board[a + i][b + j] != '.') {
					count.push_back(board[a + i][b + j]);
				}
			}
		}
		for (int i = 0; i < count.size(); i++) {
			for (int j = 0; j < count.size(); j++) {
				if (count[i] == count[j] and i != j) {
					return false;
				}
			}
		}
		return true;
	}
};
void initialize(vector<vector<char>>& board, const string& str) {
	vector<char>temp;
	for (int i = 0; i < str.size(); i++) {
		temp.push_back(str[i]);
	}
	board.push_back(temp);
	return;
}
int main()
{
	vector<vector<char>> board;
	initialize(board, "53..7....");
	initialize(board, "6..195...");
	initialize(board, ".98....6.");
	initialize(board, "8...6...3");
	initialize(board, "4..8.3..1");
	initialize(board, "7...2...6");
	initialize(board, ".6....28.");
	initialize(board, "...419..5");
	initialize(board, "....8..79");
	Solution solution;
	if (solution.isValidSudoku(board)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	system("pause");
	return 0;
}