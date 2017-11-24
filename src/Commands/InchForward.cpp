/*
 * InchForward.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: Robotics
 */

#include <Commands/InchForward.h>
#include "Commands/Stir.h"

InchForward::InchForward() {
	Requires(DriveTrain);
}

void InchForward::WaitT() {
	clock_t endwait;
	float seconds = .75;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while(clock() < endwait) {}
}

void InchForward::Initialize() {
	DriveTrain->Stop();
}


void InchForward::Execute() {
	for(int i = 0; i < 1; i++) {
	DriveTrain->IDriveForward();
	}
	Cancel();




}

bool InchForward::IsFinished() {
	return false;
}

void InchForward::End() {
	DriveTrain->Stop();
}

void InchForward::Inturrupted() {
	End();
}



