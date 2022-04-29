#include "CApp.h"

void CApp::OnLoop()
{

	rock.playerPosition.x -= rock.velocity;

	if (player.playerPosition.y < 500 - 100 - player.yUnits)
	{
		player.playerPosition.y += gravity;
	}

	if (rock.playerPosition.x < - 100)
	{
		rock.playerPosition.x = WINDOW_WIDTH + 100;
		score.AddScore();
		score.ReturnScoreString();
	}

	if (CollidedWithObstacle(player.playerPosition, rock.playerPosition))
	{

		done = true;
	}

}

bool CApp::CollidedWithObstacle(SDL_Rect A, SDL_Rect B)
{
	//The sides of the rectangles
	int leftA, leftB;
	int rightA, rightB;
	int topA, topB;
	int bottomA, bottomB;
	//Calculate the sides of rect A
	leftA = A.x;
	rightA = A.x + A.w;
	topA = A.y;
	bottomA = A.y + A.h;
	//Calculate the sides of rect B
	leftB = B.x;
	rightB = B.x + B.w;
	topB = B.y;
	bottomB = B.y + B.h;
	//If any of the sides from A are outside of B
	if (bottomA <= topB)
	{
		return false;
	}
	if (rightA <= leftB)
	{
		return false;
	}
	if (leftA >= rightB)
	{
		return false;
	}
	if (topA >= bottomB)
	{
		return false;
	}

	return true;
}