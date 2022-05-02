#include "Controller.h"

Controller::Controller()
{
	
	ControllerConnected = false;
}

bool Controller::Update()
{
	//zeros the memory
	ZeroMemory(&controllerState, sizeof(XINPUT_STATE));
	
	//gets the state of the controller to see if connected
	if (XInputGetState(0, &controllerState) == ERROR_SUCCESS)
	{
		cout << "Controller connected" << endl;
	}
	
	//checks to see if A is pressed
	if (IsAPressed())
	{
		return true;
	}
	return false;
}

bool Controller::IsAPressed() 
{
	return (controllerState.Gamepad.wButtons & XINPUT_GAMEPAD_A);
}

