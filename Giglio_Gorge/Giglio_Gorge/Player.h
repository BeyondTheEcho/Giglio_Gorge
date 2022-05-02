#pragma once
#include <iostream>

#include "SDL.h"
#include "Background.h"


class Player: public Background
{
protected:
	
	
	
	void CheckBounds();
public:
	int xUnits = 64;
	int yUnits = 72;

	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();

	SDL_Rect position = { 0, 500 - 100 - yUnits , xUnits, yUnits };
	
	



};



	

