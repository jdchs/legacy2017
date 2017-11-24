/*
 * InchBack.cpp
 *
 *  Created on: Feb 23, 2017
 *      Author: Robotics
 */

#include <Commands/InchBack.h>

InchBack::InchBack() {
	// TODO Auto-generated constructor stub

}

void InchBack::Initialize() {
	DriveTrain->Stop();
}

void InchBack::Execute() {
	for(int i = 0; i < 1; i++) {
		DriveTrain->IDriveBackward();
	}

	Cancel();
}

bool InchBack::IsFinished() {
	return false;
}

void InchBack::End() {
	DriveTrain->Stop();
}

void InchBack::Inturrupted() {
	End();
}
