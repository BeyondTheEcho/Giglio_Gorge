#include "CApp.h"



int main(int argc, char* argv[]) 
{
	CApp theApp;

	return theApp.OnExecute();
}

int CApp::OnExecute()
{
	if (OnInit() == false)
	{
		return -1;
	}

	SDL_Event event;
	Controller* xboxController = new Controller;

	while (!done)
	{
		while (SDL_PollEvent(&event))
		{
			OnEvent(&event);
		}

		xboxController->Update();

		OnLoop();

		OnRender();
		SDL_Delay(3);
	}

	//delete xboxController;
	OnCleanup();
}