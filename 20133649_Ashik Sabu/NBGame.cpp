#include "NBGame.h"
#include "Player.h"
#include "PlayerHuman.h"
#include "PlayerComp.h"
#include "BoardCoordinate.h"
#include <iostream>

using namespace std;

/*********** Declaration*******
I hereby certify that no part of this assignment has been copied from
any other student’s work or from any other source. No part of the
code has been written/produced for me by another person or copied
from any other source.
I hold a copy of this assignment that I can produce if the original
is lost or damaged.
**************************/

void NBGame::openingMessage() {

	cout << "					Nineboard TicTacToe" << endl;
	cout << "		  =============================================================				" << endl;
	cout << endl;
	cout << endl;



	cout << "Please select which mode you want to play!" << endl;
	cout << endl;

}


void NBGame::playNineBoard() {

	int choice;


	cout << "Press 1 for human || Press 2 for computer: ";
	cin >> choice;

	cout << endl;

	if (choice == 1) {
		player1 = new PlayerHuman('X');
		player2 = new PlayerHuman('O');

		cout << "You have selected Player VS Human, Enjoy!" << endl;
		//cout << endl;
	}
	if (choice == 2) {
		player1 = new PlayerHuman('X');
		player2 = new PlayerComp('O');

		cout << "You have selected Player VS Computer, Enjoy!" << endl;

	}

	srand(time(0));

	bool done = false;
	char player = 'X';
	int row{}, col{};

	nineB.creditDisplay();

	while (!done) {



		player1->getMove(nineB, row, col);
		done = nineB.addMove(player, row, col);
		


		nineB.creditDisplay();
		if (done) {
			break;
		}

		if (player == 'X') {

			player = 'O';
			player2->getMove(nineB, row, col);
			done = nineB.addMove(player, row, col);

			nineB.creditDisplay();

			

		}
		if (player == 'O')
			player = 'X';
		}
		
	}




	






