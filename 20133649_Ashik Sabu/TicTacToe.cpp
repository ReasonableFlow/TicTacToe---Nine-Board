#include "TicTacToe.h"


/*********** Declaration*******
I hereby certify that no part of this assignment has been copied from
any other student’s work or from any other source. No part of the
code has been written/produced for me by another person or copied
from any other source.
I hold a copy of this assignment that I can produce if the original
is lost or damaged.
**************************/


using namespace std;


enum Status {

	WIN, DRAW, CONTINUE
};

//Constructor 
TicTacToe::TicTacToe() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';

		}

	}

	noOfMoves = 0;

}





bool TicTacToe::addMove(char playerSymbol, int row, int col) {

	board[row][col] = playerSymbol;
	noOfMoves++;

	Status gStatus = gameStatus();

	if (gStatus == WIN) {
		cout << "Player " << playerSymbol << " wins!" << endl;
		return true;
	}
	else if (gStatus == DRAW) {
		cout << "This game is a draw!" << endl;
		return true;
	}
	else if (noOfMoves >= 9) {
		return true;
	}
	else
		return false;

	return true;
}



bool TicTacToe::isValidMove(int row, int col) {

	if (true && ((row >= 0 && row <= 2) && (col >= 0 && col <= 2)) && (board[row][col] != 'X' && board[row][col] != 'O'))
		return true;
	else
		return false;


}
TicTacToe::Status TicTacToe::gameStatus() {

	for (int i = 0; i <= 2; i++) {

		//Check win for X and O - Rows
		if ((board[i][0] == 'X' && board[i][1] == 'X') && board[i][2] == 'X') {

			return WIN;
		}

		if ((board[i][0] == 'O' && board[i][1] == 'O') && board[i][2] == 'O') {

			return WIN;
		}

	}


	for (int i = 0; i <= 2; i++) {

		//Check win for X and O - Columns
		if ((board[0][i] == 'O' && board[1][i] == 'O') && board[2][i] == 'O') {

			return WIN;
		}

		if ((board[0][i] == 'X' && board[1][i] == 'X') && board[2][i] == 'X') {

			return WIN;
		}

	}


	//Diagonals Win
	if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
		(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'))
	{
		return WIN;
	}

	if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
		(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'))
	{
		return WIN;
	}



	if (noOfMoves == 9) {

		return DRAW;
	}
	else {

		return CONTINUE;

	}





}



