#pragma once
#include <string>
#include <fstream>
#include "Score.h"
#include <vector>
#include <tuple>

using namespace std;

class SaveSystem
{
public:
	string saveFilePath = "./SaveGameData/";
	string saveFileName = "SaveData.dat";

	vector<tuple<string, int>> PlayerData;

	SaveSystem();
	string BuildFile();
	void SavePlayerData();
	void LoadPlayerData();
};