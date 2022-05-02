#include "CApp.h"

bool CApp::OnInit()
{
	//creates window
	window = SDL_CreateWindow("Giglios Gorge",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WIDTH, WINDOW_HEIGHT,
		SDL_WINDOW_SHOWN);

	//if window does not work, escapes
	if (!window)
	{
		return -1;
	}

	renderer = SDL_CreateRenderer(window, -1, 0);

	//if renderer does not work, escapes
	if (!renderer)
	{
		return -1;
	}

	//loads BG
	if (bg.LoadSprite("Assets\\BG.bmp", renderer, bg.texture) < 0)
	{
		return -1;
	}

	font = TTF_OpenFont("Assets\\DINO-SKY.ttf", 50);
	fontColor = { 0, 0, 0 };

	//loads player
	if (player.LoadSprite("Assets\\Dino.bmp", renderer, player.texture) < 0)
	{
		return -1;
	}

	//loads rock
	if (rock.LoadSprite("Assets\\Rock.bmp", renderer, rock.texture) < 0)
	{
		return -1;
	}



	return true;
}