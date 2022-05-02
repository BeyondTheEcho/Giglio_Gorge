#include "CApp.h"

void CApp::OnLoop()
{
	//moves rock towards pplayer
	rock.position.x -= rock.velocity;

	//check to see if jumping
	if (jumped)
	{
		player.MoveUp();
	}

	//gravity
	if (player.position.y < 500 - 100 - player.yUnits)
	{
		player.position.y += gravity;
	}

	//recycles rock
	if (rock.position.x < - 100)
	{
		rock.position.x = WINDOW_WIDTH + 100;
		score.AddScore();
		score.ReturnScoreString();
	}

	//checks if player collided with rock
	if (CollidedWithObstacle(player.position, rock.position))
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