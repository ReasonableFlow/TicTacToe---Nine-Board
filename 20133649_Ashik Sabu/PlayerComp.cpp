#include "PlayerComp.h"


/*********** Declaration*******
I hereby certify that no part of this assignment has been copied from
any other student’s work or from any other source. No part of the
code has been written/produced for me by another person or copied
from any other source.
I hold a copy of this assignment that I can produce if the original
is lost or damaged.
**************************/

void PlayerComp::getMove(NineBoard nBoard, int& row, int& col) {

	do {

		row = rand() % 3;
		col = rand() % 3;

		cout << "The computer has chosen its move! " << endl;
		cout << endl;



	} while (!nBoard.getCurrentBoard()->isValidMove(row, col));
}

