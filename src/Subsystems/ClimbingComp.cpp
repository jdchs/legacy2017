/*
 * ClimbingComp.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: dange
 */

#include "ClimbingComp.h"
#include "RobotMap.h"
#include "WPILib.h"

ClimbingComp::ClimbingComp() :  Subsystem("Climbing") {
	Climb = new Talon(CLIMBINGARM);
}

void ClimbingComp::InitDefaultCommand() {

}

void ClimbingComp::Up() {
	Climb->Set(1);
}

void ClimbingComp::Down() {
	Climb->Set(-1);
}

void ClimbingComp::Stop() {
	Climb->Set(0);
}

void ClimbingComp::Pulse() {
	Climb->Set(.5);
	WaitT();
}

void ClimbingComp::WaitT() {
	clock_t endwait;
		float seconds = .2;
		endwait = clock() + seconds * CLOCKS_PER_SEC;
		while(clock() < endwait) {}
}



