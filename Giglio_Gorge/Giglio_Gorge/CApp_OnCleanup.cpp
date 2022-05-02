#include "CApp.h"

void CApp::OnCleanup()
{
	//destroys window
	SDL_DestroyWindow(window);
	window = NULL;

	//deletes renderer and resets pointer
	SDL_DestroyRenderer(renderer);
	renderer = NULL;

	//closes ttf fonts
	TTF_CloseFont(font);
	TTF_Quit();

	//quits the program
	SDL_Quit();
}