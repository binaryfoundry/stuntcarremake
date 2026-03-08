#include "platform_sdl_gl.h"

#include "XBOXController.h"

// ctor - playerNumber 1<>4
CXBOXController::CXBOXController(const int playerNumber)
{
	// Set the Controller Number
	_controllerNum = playerNumber - 1;
}

XINPUT_STATE CXBOXController::GetState()
{
	// Zeroise the state
	ZeroMemory(&_controllerState, sizeof(XINPUT_STATE));
	_controllerState = 0;

	return _controllerState;
}

bool CXBOXController::IsConnected()
{
	// Zeroise the state
	ZeroMemory(&_controllerState, sizeof(XINPUT_STATE));
	return false;
}

void CXBOXController::Vibrate(const unsigned short leftVal, const unsigned short rightVal)
{
	(void)leftVal;
	(void)rightVal;
}

