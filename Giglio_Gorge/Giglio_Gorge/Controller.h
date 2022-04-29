#pragma once
//#define  WIN32_LEAN_AND_MEAN 1

#include "windows.h"
#include "xinput.h"
#include <iostream>

using namespace std;

class Controller
{
	
public:
	
	Controller();
	
	XINPUT_STATE controllerState;
	bool ControllerConnected;

	bool IsAPressed();

	void Update();
	
	
	

};

