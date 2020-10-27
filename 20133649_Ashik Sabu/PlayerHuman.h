#pragma once

#include "BoardCoordinate.h"
#include "TicTacToe.h"
#include "Player.h"

class PlayerHuman:public Player
{

public:


	PlayerHuman(char pS):Player(pS) {

	}

	void getMove(NineBoard nine, int& row, int& col);
	

};

