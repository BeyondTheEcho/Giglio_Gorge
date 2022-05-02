#include "Score.h"
#include <string>

using namespace std;

int Score::playerScore = 0;
string Score::playerName = "";

//stelios did all this

string Score::ReturnScoreString()
{
	return ConstructScoreString();
}

void Score::AddScore()
{
	playerScore++;
}

void Score::SetPlayerName(string name)
{
	playerName = name;
}

string Score::ReturnPlayerName()
{
	return playerName;
}

string Score::ConstructScoreString()
{
	if (playerScore <= 10)
	{
		return FormatString(baseStringOne, placeHolder, playerScore);
	}
	else if (playerScore <= 20)
	{
		return FormatString(baseStringTwo, placeHolder, playerScore);

	}
	else if (playerScore <= 30)
	{
		return FormatString(baseStringThree, placeHolder, playerScore);

	}
	else if (playerScore <= 40)
	{
		return  FormatString(baseStringFour, placeHolder, playerScore);
	}
}

string Score::FormatString(string s, char c, int score)
{
	int index = s.find(c);

	s.erase(index, 2);

	s.insert(index, std::to_string(score) += " ");

	return s;
}

string Score::ReturnSaveData()
{
	string SaveData;

	SaveData.append(playerName);
	SaveData.append("\n");
	SaveData.append(std::to_string(playerScore));

	return SaveData;
}

