/*
 *  GameBoard.cpp
 *
 *
 *
 *Created by Joseph Whittington 9/19/2011
 *
 *
 */

#include "GameBoard.h"
#include <iostream>

using std::cout;
using std::endl;

unsigned int GameBoard::BOARD_HEIGHT = 4;
unsigned int GameBoard::BOARD_WIDTH = 4;

GameBoard::GameBoard()
{
	for (int x = 0; x < BOARD_WIDTH; ++x)
	{
		for (int y = 0; y < BOARD_HEIGHT; ++y)
		{
			SetPieceAt(x, y, '-');
		}
	}
}

void GameBoard::Render()
{
	for (int r = 0; r < BOARD_HEIGHT; ++r)
	{
		for (int c = 0; c < BOARD_WIDTH; ++c)
		{
			cout << " " << locations[c + r * BOARD_WIDTH] << " ";
			if (c!= BOARD_WIDTH - 1) cout << "|";
		}
		cout << endl;
		if (r != BOARD_HEIGHT - 1){
			for (int c = 0; c < BOARD_WIDTH; ++c) {
				cout << "---" ;
				if (c != BOARD_WIDTH - 1) cout << "+";
			}
			cout << endl;
		}
	}

}

void GameBoard::SetPieceAt(int x, int y, char c)
{
	if (x < 0 || x > BOARD_WIDTH - 1) return;
	if (y < 0 || y > BOARD_HEIGHT - 1) return;

	locations[ x + y * BOARD_WIDTH ] = c;

}