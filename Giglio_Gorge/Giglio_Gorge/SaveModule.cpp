#include "SaveModule.h"
#include <string>
#include <fstream>
#include "Score.h"
#include <vector>
#include <tuple>

using namespace std;


SaveSystem::SaveSystem()
{
	ifstream MyFile("./SaveGameData/SaveData.dat");

	if (MyFile.is_open())
	{
		MyFile.close();
	}
	else
	{
		ofstream SaveGameData(saveFilePath.append(saveFileName));
		SaveGameData.close();
	}
}


string SaveSystem::BuildFile()
{
	string file = saveFilePath;
	file.append(saveFileName);

	return file;
}

void SaveSystem::SavePlayerData()
{
	ofstream SaveGameData(BuildFile());

	SaveGameData << Score::ReturnSaveData() << "\n";

	SaveGameData.close();
}

void SaveSystem::LoadPlayerData()
{
	string readData;
	int toggle = true;
	int index = 0;

	ifstream LoadedGameData(BuildFile());

	while (getline(LoadedGameData, readData))
	{
		if (toggle)
		{
			get<0>(PlayerData[index]) = readData;

			toggle = !toggle;
		}
		else
		{
			get<1>(PlayerData[index]) = stoi(readData);

			index++;
			toggle = !toggle;
		}
	}
}