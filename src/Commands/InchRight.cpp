/*
 * InchRight.cpp
 *
 *  Created on: Feb 19, 2017
 *      Author: dange
 */

#include <Commands/InchRight.h>

InchRight::InchRight() {
	stick = oi->GetDriveJoy();
}

void InchRight::Initialize() {
	DriveTrain->Stop();
}

void InchRight::Execute() {
	DriveTrain->TurnRight();
}

bool InchRight::IsFinished() {
	return false;
}

void InchRight::End() {
	DriveTrain->Stop();
}

void InchRight::Inturrupted() {
	End();
}
