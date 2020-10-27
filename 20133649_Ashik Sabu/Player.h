#pragma once
#include "NineBoard.h"

class Player
{
protected:

	char playerSymbol;

public:

	Player(char pS) {

		 playerSymbol = pS;
	}

	virtual void getMove(NineBoard, int&, int&) = 0; 
};

