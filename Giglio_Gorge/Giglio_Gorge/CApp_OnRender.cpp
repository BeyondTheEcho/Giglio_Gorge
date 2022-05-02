#include "CApp.h"

void CApp::OnRender()
{
	SDL_Rect BGColor = { 0, 0, WINDOW_WIDTH, WINDOW_HEIGHT };

	//clears renderer
	SDL_RenderClear(renderer);
	//picks color
	SDL_SetRenderDrawColor(renderer, 58, 218, 223, 255);
	SDL_RenderFillRect(renderer, &BGColor);
	
	//renders BG
	SDL_RenderCopy(renderer, bg.texture, NULL, NULL);

	//render game score
	DisplayGameStats(20, 20, "Score: %d", score.playerScore);

	//render player
	SDL_RenderCopy(renderer, player.texture, NULL, &player.position);
	
	//render rock
	SDL_RenderCopy(renderer, rock.texture, NULL, &rock.position);
	
	//shows whats been rendered
	SDL_RenderPresent(renderer);

}


void CApp::DisplayGameStats(int x, int y, const char* formattedString, int number)
{
	SDL_DestroyTexture(messageTexture);
	SDL_FreeSurface(messageSurface);

	sprintf_s(message, formattedString, number);
	messageSurface = TTF_RenderText_Solid(font, message, fontColor);
	messageTexture = SDL_CreateTextureFromSurface(renderer, messageSurface);

	int texW = 0;
	int texH = 0;
	SDL_QueryTexture(messageTexture, NULL, NULL, &texW, &texH);
	messageRect = { x, y, texW, texH };
	SDL_RenderCopy(renderer, messageTexture, NULL, &messageRect);

}
