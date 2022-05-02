#include "CApp.h"



int main(int argc, char* argv[]) 
{
	CApp theApp;

	return theApp.OnExecute();
}

int CApp::OnExecute()
{
	//initializes TTF fonts
	TTF_Init();

	//initializes everything else
	if (OnInit() == false)
	{
		return -1;
	}
	
	string initials;
	cout << "What are you initials?" << endl;
	cin >> initials;
	score.SetPlayerName(initials);


	//SDL Events
	SDL_Event event;
	Controller* xboxController = new Controller;


	/*while (!done) 
	{
		MenuScreen();
	}*/

	done = false;

	//main game loop
	while (!done)
	{
		//SDL EVENTS
		while (SDL_PollEvent(&event))
		{
			OnEvent(&event);
		}

		jumped = xboxController->Update();

		//loop
		OnLoop();

		//renders
		OnRender();
		SDL_Delay(3);
	}

	save.SavePlayerData();

	delete xboxController;
	OnCleanup();
}