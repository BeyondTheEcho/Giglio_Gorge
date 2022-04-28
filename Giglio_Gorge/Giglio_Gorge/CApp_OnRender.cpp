#include "CApp.h"

void CApp::OnRender()
{
	SDL_Rect BGColor = { 0, 0, WINDOW_WIDTH, WINDOW_HEIGHT };

	SDL_RenderClear(renderer);

	SDL_SetRenderDrawColor(renderer, 58, 218, 223, 255);
	SDL_RenderFillRect(renderer, &BGColor);
	
	SDL_RenderCopy(renderer, bg.texture, NULL, NULL);

	
	SDL_RenderCopy(renderer, player.texture, NULL, &player.playerPosition);
	
	SDL_RenderCopy(renderer, rock.texture, NULL, &rock.playerPosition);
	

	SDL_RenderPresent(renderer);

}

