#pragma once
#include "NineBoard.h"
#include "Player.h"
#include "BoardCoordinate.h"

class NBGame
{
	
private:

	NineBoard nineB;
	Player* player1;
	Player* player2;
	BoardCoordinate bCord;

public:
	
	
	void openingMessage();
	void playNineBoard();

};

