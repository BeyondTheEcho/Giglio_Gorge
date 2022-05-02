#include "CApp.h"
#include "Player.h"

void Player::CheckBounds() 
{
	if (position.x < 0)
	{
		position.x = 0;
	}
	if (position.x > WINDOW_WIDTH - 1)
	{
		position.x = WINDOW_WIDTH - xUnits;
	}
	if (position.y < 0)
	{
		position.y = 0;
	}
	if (position.y > WINDOW_HEIGHT - 1)
	{
		position.y = WINDOW_HEIGHT - yUnits;
	}
}

void Player::MoveLeft()
{
	position.x -= xUnits;
	CheckBounds();
}

void Player::MoveRight()
{
	position.x += xUnits;
	CheckBounds();
}

//the only one we will be using. It's a jump!!
void Player::MoveUp()
{
	if (position.y == 500 - 100 - yUnits)
	{
		position.y -= yUnits * 4;
	}
	
	CheckBounds();
}

void Player::MoveDown()
{
	position.y += yUnits;
	CheckBounds();
}


