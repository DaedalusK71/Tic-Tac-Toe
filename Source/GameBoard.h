/*
 * GameBoard.h
 *
 *
 *
 *  Created by Joseph Whittington 9/19/11
 *
 *
 */

#ifndef GAME_BOARD_H
#define GAME_BOARD_H

class GameBoard
{
public:
	GameBoard();
	void Render();
	void SetPieceAt(int x, int y, char c);

private:
	char locations[9];

	static unsigned int BOARD_HEIGHT;
	static unsigned int BOARD_WIDTH;
};

#endif