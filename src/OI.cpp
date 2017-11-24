#include "OI.h"

#include <WPILib.h>
#include "Commands/BallLoadUp.h"
#include "Commands/BallLoadDown.h"
#include "Commands/Fire.h"
#include "Commands/ClimbUp.h"
#include "Commands/ClimbDown.h"
#include "Commands/Stir.h"
#include "Commands/StirStop.h"
#include "Commands/InchForward.h"
#include "Commands/InchBack.h"
#include "Commands/StirReverse.h"





OI::OI() {
	// Process operator interface input here.
	driveJoy = new Joystick(0);
	xbox = new Joystick(1);


	//joystick buttons
	b1 = new JoystickButton(driveJoy, 1);
	b2 = new JoystickButton(driveJoy, 2);
	b3 = new JoystickButton(driveJoy, 3);
	b4 = new JoystickButton(driveJoy, 4);
	b5 = new JoystickButton(driveJoy, 5);
	b6 = new JoystickButton(driveJoy, 6);
	b7 = new JoystickButton(driveJoy, 7);
	b8 = new JoystickButton(driveJoy, 8);
	b9 = new JoystickButton(driveJoy, 9);
	b10 = new JoystickButton(driveJoy, 10);
	b11 = new JoystickButton(driveJoy, 11);
	b12 = new JoystickButton(driveJoy, 12);

	//Xbox

	A = new JoystickButton(xbox, 1);
	Y = new JoystickButton(xbox, 4);
	X = new JoystickButton(xbox, 3 );
	B = new JoystickButton(xbox, 2);
	RB = new JoystickButton(xbox, 6);


	Y->WhileHeld(new BallLoadUp());
	A->WhileHeld(new BallLoadDown());
	b1->WhileHeld(new Fire());
	b1->WhileHeld(new Stir());
	X->WhileHeld(new ClimbUp());
	B->WhileHeld(new ClimbDown());


	b3->WhenReleased(new InchForward());
	b3->WhenReleased(new InchBack());
	b4->WhileHeld(new StirReverse());







}

Joystick *OI::GetDriveJoy() {
	return driveJoy;
}




