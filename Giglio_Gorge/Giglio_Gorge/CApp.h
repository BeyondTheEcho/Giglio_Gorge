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
#include "SaveModule.h"

using namespace std;

#define WINDOW_WIDTH	800
#define WINDOW_HEIGHT	500

#define NUM_SPRITES		1

class CApp
{
public:

	//void MenuScreen();

	bool OnInit();
	void OnEvent(SDL_Event* event);
	
	void OnLoop();
	bool CollidedWithObstacle(SDL_Rect A, SDL_Rect B);
	
	void OnRender();
	void DisplayGameStats(int x, int y, const char* formattedString, int number);

	void OnCleanup();

	int OnExecute();


private:

	

	bool done = false;
	
	Player player;

	Rock rock;

	Score score;
	SaveSystem save;
	
	bool jumped = false;
	int gravity = 1;

	SDL_Window* window;
	SDL_Renderer* renderer;
	
	Background bg;

	TTF_Font* font;
	SDL_Color fontColor;
	char message[100];
	SDL_Surface* messageSurface;
	SDL_Texture* messageTexture;
	SDL_Rect messageRect;

};
