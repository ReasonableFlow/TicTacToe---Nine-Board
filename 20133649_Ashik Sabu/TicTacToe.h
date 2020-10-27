#pragma once
#ifndef TICTACTOE_H
#define TICTACTIE_H


#include <string>
#include <iomanip>
#include <time.h>
#include <iostream>



using namespace std;

class TicTacToe
{

private:

	char board[3][3];
	int noOfMoves;


public:



	enum Status {

		WIN, DRAW, CONTINUE
	};

	Status gameStatus();


	char cordBoard(int row, int col) {

		return board[row][col];
	}


	TicTacToe();
	bool addMove(char playerSymbol, int row, int col);
	bool isValidMove(int row, int col);




};

#endif // !TICTACTOE_H