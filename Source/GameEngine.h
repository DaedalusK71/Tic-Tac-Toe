/*
 * GameEngine.h
 *
 *
 *
 *  Created by Joseph Whittington 9/19/11
 *
 *
 */

#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "GameBoard.h"

class GameEngine {
public:
	void run();

private:
	GameBoard board;
};

#endif