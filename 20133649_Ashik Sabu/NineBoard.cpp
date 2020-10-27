#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

#include "TicTacToe.h"
#include "BoardCoordinate.h"
#include "NineBoard.h"


using namespace std;


/*********** Declaration*******
I hereby certify that no part of this assignment has been copied from
any other student’s work or from any other source. No part of the
code has been written/produced for me by another person or copied
from any other source.
I hold a copy of this assignment that I can produce if the original
is lost or damaged.
**************************/
															
NineBoard::NineBoard() {



	boardCord.boardRow = rand() % 3;
	boardCord.boardColm = rand() % 3;


}




bool NineBoard::addMove(char playerSymbol, int row, int col) {

	bool done = nBoard[boardCord.boardRow][boardCord.boardColm].addMove(playerSymbol, row, col);

	boardCord.boardRow = row;
	boardCord.boardColm = col;

	return done; 
}

void NineBoard::boardFull() {

	

}

void NineBoard::creditDisplay() {



	for (int i = 0; i < 3; i++) {


		for (int j = 0; j < 3; j++) {
			if (i == boardCord.boardRow && j == boardCord.boardColm) {
				cout << "  * * * * *  ";

			}
			else {
				cout << "  - - - - -  ";
				
			}
		}

		cout << endl;


		for (int row = 0; row < 3; row++) {

			for (int j = 0; j < 3; j++) {

				for (int col = 0; col < 3; col++) {

					if (col == 0 && i == boardCord.boardRow && j == boardCord.boardColm) {


						cout << "* " << nBoard[i][j].cordBoard(row, col) << " ";

					}
					else {
						cout << "| " << nBoard[i][j].cordBoard(row, col) << " ";
					}

					if (col == 2) {
						if (i == boardCord.boardRow && j == boardCord.boardColm) {
							cout << "*";
						}
						else {
							cout << "|";
						}
					}
				}
			}


			cout << endl;

			if (row != 2) {
				for (int j = 0; j < 3; j++) {

					if (i == boardCord.boardRow && j == boardCord.boardColm) {
						cout << "* -   -   - *";
						
					}
					else {
					
						cout << "| -   -   - |";
						

					}

				}
				cout << endl;
			}
		}

		for (int j = 0; j < 3; j++) {

			if (i == boardCord.boardRow && j == boardCord.boardColm) {
			
				cout << "  * * * * *  ";

			}
			else {
				
				cout << "  - - - - -  ";

			}
		}

		cout << endl;
	}


}





