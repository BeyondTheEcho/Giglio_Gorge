#include "Controller.h"

Controller::Controller()
{
	
	ControllerConnected = false;
}

void Controller::Update()
{
	ZeroMemory(&controllerState, sizeof(XINPUT_STATE));
	
	if (XInputGetState(0, &controllerState) == ERROR_SUCCESS)
	{
		cout << "Controller connected" << endl;
	}
	
	if (IsAPressed())
	{
		cout << "Jump" << endl;
	}
}

bool Controller::IsAPressed() 
{
	return (controllerState.Gamepad.wButtons & XINPUT_GAMEPAD_A);
}

