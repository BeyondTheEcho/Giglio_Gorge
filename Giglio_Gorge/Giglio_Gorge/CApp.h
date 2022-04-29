#pragma once
#include <iostream>


#include "SDL.h"
#include "SDL_mixer.h"
#include "SDL_ttf.h"

#include "Player.h"
#include "Rock.h"
#include "Background.h"
#include "Score.h"
#include "Windows.h"
#include "Xinput.h"
#include "Controller.h"

using namespace std;

#define WINDOW_WIDTH	800
#define WINDOW_HEIGHT	500

#define NUM_SPRITES		1

class CApp
{
public:

	bool OnInit();
	void OnEvent(SDL_Event* event);
	
	void OnLoop();
	bool CollidedWithObstacle(SDL_Rect A, SDL_Rect B);
	
	void OnRender();

	void OnCleanup();

	int OnExecute();


private:

	

	bool done = false;
	
	Player player;

	Rock rock;

	Score score;
	
	int gravity = 1;

	SDL_Window* window;
	SDL_Renderer* renderer;
	
	Background bg;

};
