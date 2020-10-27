#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include "PlayerHuman.h"



using namespace std; 



/*********** Declaration*******
I hereby certify that no part of this assignment has been copied from
any other student’s work or from any other source. No part of the
code has been written/produced for me by another person or copied
from any other source.
I hold a copy of this assignment that I can produce if the original
is lost or damaged.
**************************/

void PlayerHuman::getMove(NineBoard nBoard, int& row, int& col) {

	do {
		cout << "Player " << playerSymbol << " enter move: ";
		cin >> row >> col;
		cout << endl;
	} while (!nBoard.getCurrentBoard()->isValidMove(row - 1, col - 1));

	row--;
	col--;

}


