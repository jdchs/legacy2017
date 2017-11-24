#include "TimedLinearDrive.h"

TimedLinearDrive::TimedLinearDrive(double timeout, LinearDirection direction) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(DriveTrain);
	SetTimeout(timeout);
	dir = direction;
}

// Called just before this Command runs the first time
void TimedLinearDrive::Initialize() {
	DriveTrain->Stop();
}

// Called repeatedly when this Command is scheduled to run
void TimedLinearDrive::Execute() {
	if (dir == forward){
		DriveTrain->DriveForward();
	} else if (dir == backward){
		DriveTrain->DriveBackward();
	} else if (dir == turnleft){
		DriveTrain->TurnLeft();
	} else if (dir == turnright){
		DriveTrain->TurnRight();
	} else if (dir == stop){
		DriveTrain->Stop();
	} else if(dir == FA) {
		DriveTrain->DriveFA();
	} else if(dir == BA) {
		DriveTrain->DriveBA();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool TimedLinearDrive::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void TimedLinearDrive::End() {
	DriveTrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TimedLinearDrive::Interrupted() {
	End();
}
