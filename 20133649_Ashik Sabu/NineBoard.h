#pragma once
#ifndef NINEBOARD_H
#define NINEBOARD_H

#include "BoardCoordinate.h"
#include "TicTacToe.h"



class NineBoard
{

private:

	TicTacToe nBoard[3][3];
	BoardCoordinate boardCord;

public:

	NineBoard();
	void creditDisplay();
	bool addMove(char playerSymbol, int row, int col);
	void boardFull();
	TicTacToe* getCurrentBoard() { return &nBoard[boardCord.boardRow][boardCord.boardColm]; }

};

#endif // !NINEBOARD_H