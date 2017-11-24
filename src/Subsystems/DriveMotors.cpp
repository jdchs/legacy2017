/*
 * DriveMotors.cpp
 *
 *  Created on: Feb 16, 2017
 *      Author: dange
 */

#include "DriveMotors.h"
#include "../RobotMap.h"
#include "Commands/ContinuousDrive.h"


DriveMotors::DriveMotors() : Subsystem("DriveMotors") {
	leftFront = new Talon(LEFTFRONT);
	rightFront = new Talon(RIGHTFRONT);
	leftBack = new Talon(LEFTBACK);
	rightBack = new Talon(RIGHTBACK);
	drive = new RobotDrive(leftFront, leftBack, rightFront, rightBack);
	help = new MotorSafetyHelper(drive);



}

void DriveMotors::InitDefaultCommand() {

	ContinuousDrive *c = new ContinuousDrive();
	SetDefaultCommand(c);
}

void DriveMotors::DriveForward() {

		leftFront->Set(1);
		rightFront->Set(-1);
		leftBack->Set(1);
		rightBack->Set(-1);



}

void DriveMotors::WaitT() {
	clock_t endwait;
	float seconds = 20;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while(clock() < endwait) {}
}



void DriveMotors::IDriveForward() {
	leftFront->Set(.5);
	rightFront->Set(-.5);
	leftBack->Set(.5);
	rightBack->Set(-.5);

	WaitT();

	leftFront->Set(0);
	rightFront->Set(0);
	leftBack->Set(0);
	rightBack->Set(0);

}

void DriveMotors::IDriveBackward() {
	leftFront->Set(-.5);
	rightFront->Set(.5);
	leftBack->Set(-.5);
	rightBack->Set(.5);

	WaitT();

	leftFront->Set(0);
	rightFront->Set(0);
	leftBack->Set(0);
	rightBack->Set(0);
}


void DriveMotors::DriveBackward() {
	leftFront->Set(-1);
	rightFront->Set(1);
	leftBack->Set(-1);
	rightBack->Set(1);
}

void DriveMotors::TurnLeft(){
	leftFront->Set(1);
	rightFront->Set(1);
	leftBack->Set(1);
	rightBack->Set(1);
}

void DriveMotors::TurnRight(){
	leftFront->Set(-1);
	rightFront->Set(-1);
	leftBack->Set(-1);
	rightBack->Set(-1);
}
void DriveMotors::Stop() {

	leftFront->Set(0);
	rightFront->Set(0);
	leftBack->Set(0);
	rightBack->Set(0);
}

void DriveMotors::ArcadeDrive(float x, float y) {
	help->SetSafetyEnabled(false);
	drive->ArcadeDrive(y, x, true);
}

void DriveMotors::AutoDriveF(float Value) {
	while(true) {
		if(Value >= .1) {
			leftFront->Set(0);
			rightFront->Set(0);
			leftBack->Set(0);
			rightBack->Set(0);
			break;
		}else{
			leftFront->Set(1);
			rightFront->Set(-1);
			leftBack->Set(1);
			rightBack->Set(-1);
		}
	}
}

void DriveMotors::DriveFA() {
	leftFront->Set(.75);
	rightFront->Set(-.75);
	leftBack->Set(.75);
	leftFront->Set(-.75);
}

void DriveMotors::DriveBA() {
	leftFront->Set(-.5);
	rightFront->Set(.5);
	leftBack->Set(-.5);
	rightBack->Set(.5);
}

