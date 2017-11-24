#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include <Buttons/JoystickButton.h>
#include "Joystick.h"


class OI {

private:
	Joystick *driveJoy;
	JoystickButton *b1, *b2, *b3, *b4, *b5, *b6, *b7, *b8, *b9, *b10, *b11, *b12;
	Joystick *xbox;
	JoystickButton *Y, *A, *RB, *X, *B;


public:
	OI();
	Joystick *GetDriveJoy();





};

#endif  // OI_H
