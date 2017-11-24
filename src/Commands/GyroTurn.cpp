#include "GyroTurn.h"

GyroTurn::GyroTurn(float A) {
	Requires(DriveTrain);

	Angle = A;

}

// Called just before this Command runs the first time
void GyroTurn::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void GyroTurn::Execute() {
	start:
	if(GyroC->GetAngle() >= Angle) {
		DriveTrain->Stop();
	}else{
		DriveTrain->TurnLeft();
		goto start;
	}
}

// Make this return true when this Command no longer needs to run execute()
bool GyroTurn::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void GyroTurn::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GyroTurn::Interrupted() {

}
