#pragma once
#include "SDL.h"
#include "Player.h"

class Rock : public Player
{
public:
	SDL_Rect position = { 800 - xUnits, 500 - 100 - yUnits , xUnits, yUnits };
	int velocity = 1;
private:

};

