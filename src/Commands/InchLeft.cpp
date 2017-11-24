/*
 * InchLeft.cpp
 *
 *  Created on: Feb 19, 2017
 *      Author: dange
 */

#include <Commands/InchLeft.h>

InchLeft::InchLeft() {
	stick = oi->GetDriveJoy();
}

void InchLeft::Initialize() {
	DriveTrain->Stop();
}

void InchLeft::Execute() {
	DriveTrain->TurnLeft();
}

bool InchLeft::IsFinished() {
	return false;
}

void InchLeft::End() {
	DriveTrain->Stop();
}

void InchLeft::Inturrupted() {
	End();
}
