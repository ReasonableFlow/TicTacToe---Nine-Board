#pragma once

#include "BoardCoordinate.h"
#include "TicTacToe.h"
#include "Player.h"



class PlayerComp: public Player
{
	


public:


	PlayerComp(char pS):Player (pS) {
		
	}


	 void getMove(NineBoard nine, int& row, int& col);
	

};

