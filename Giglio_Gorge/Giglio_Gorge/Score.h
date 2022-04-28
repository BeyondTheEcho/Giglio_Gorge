#pragma once
#include <string>

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

	void AddScore();
	void SetPlayerName(string name);
	string ReturnScoreString();
	string ReturnPlayerName();
	string ConstructScoreString();
	string FormatString(string s, char c, int score);

	static string ReturnSaveData();
};