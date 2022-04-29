#include "CApp.h"

void CApp::OnEvent(SDL_Event* event)
{
	switch (event->type)
	{
	case SDL_QUIT:
		done = true;
		break;
	case SDL_KEYDOWN:
		switch (event->key.keysym.sym)
		{
		case SDLK_ESCAPE:
			done = true;
			break;
		case SDLK_UP:
			player.MoveUp();
			break;
		}
	}
	


}