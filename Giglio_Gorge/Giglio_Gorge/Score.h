#pragma once
#include <string>
#include "SDL.h"

using namespace std;

class Score
{
public:
	static string playerName;
	string scoreOutputString;
	static int playerScore;
	char placeHolder = 'X';

	string baseStringOne = "Score: X";
	string baseStringTwo = "You have jumped over X rocks";
	string baseStringThree = "You have leaped over X tall buildings";
	string baseStringFour = "You have conquered X rocks";


	//Only use these
	void AddScore();
	string ReturnScoreString();
	
	void SetPlayerName(string name);
	string ReturnPlayerName();
	string ConstructScoreString();
	string FormatString(string s, char c, int score);

	static string ReturnSaveData();
};