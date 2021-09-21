#include<iostream>
#include<vector>
#include<strings.h>

using namespace std;

class Solution {
public:
	void printboard(int board[3][3]){
		cout << endl;
		for(int i = 0; i < 3; ++i){
			for(int j = 0; j < 3; ++j)
				cout << board[i][j] << "\t";
			cout << endl;
		}
	}

    bool isLine(int board[3][3]){
        bool result = false;
		if(	(board[0][0] != 0 && board[0][0] == board[0][1] && board[0][1] == board[0][2]) ||
        	(board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        	(board[0][0] != 0 && board[0][0] == board[1][0] && board[1][0] == board[2][0]) ||
        	(board[0][1] != 0 && board[0][1] == board[1][1] && board[1][1] == board[2][1]) ||
        	(board[0][2] != 0 && board[0][2] == board[1][1] && board[1][1] == board[2][0]) ||
        	(board[0][2] != 0 && board[0][2] == board[1][2] && board[1][2] == board[2][2]) ||
        	(board[1][0] != 0 && board[1][0] == board[1][1] && board[1][1] == board[1][2]) ||
        	(board[2][0] != 0 && board[2][0] == board[2][1] && board[2][1] == board[2][2])	)
			result = true;

        return result;
    }

    string tictactoe(vector<vector<int>>& moves) {
        string result = "Pending", marker = "B";
		int counter = 0;

		int board[3][3] = {
			{0, 0, 0},
			{0, 0, 0},
			{0, 0, 0}
		};

		if(moves.size() > 4){
			for(vector<int> pos : moves) {
				marker = (marker == "B") ? "A" : "B";
				board[pos[0]][pos[1]] = marker[0];
				result = (counter < 9) ? (isLine(board) ? marker : "Pending") : "Draw";
				++counter;
			}
		}

        if(counter == 9)
            result = isLine(board) ? marker : "Draw";

        return result;
    }
};


int main(int args_c, char* args_v[]){

	vector<vector<int>> moves = {
// 		{0, 0}, {1, 1}
// 		{0, 0}, {2, 0}, {1, 1}, {2, 1}, {2, 2}
// 		{0, 2}, {2, 0}, {2, 1}, {0, 1}, {1, 2}
// 		{0, 0}, {1, 1}, {0, 1}, {0, 2}, {1, 0}, {2, 0}
// 		{1, 1}, {1, 0}, {0, 0}, {2, 2}, {0, 2}, {2, 0}, {0, 1}
// 		{1, 1}, {1, 0}, {0, 0}, {2, 2}, {0, 2}, {2, 0}, {2, 1}, {0, 1}
// 		{0, 0}, {1, 1}, {2, 0}, {1, 0}, {1, 2}, {2, 1}, {0, 1}, {0, 2}, {2, 2}
// 		{0, 2}, {1, 0}, {2, 2}, {1, 2}, {2, 0}, {0, 0}, {0, 1}, {2, 1}, {1, 1}
	};

	Solution s;
	cout << "Result : " << s.tictactoe(moves) << endl;

	return 0;
}
