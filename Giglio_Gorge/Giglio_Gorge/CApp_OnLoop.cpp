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
	}

}