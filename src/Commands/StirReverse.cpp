#include "StirReverse.h"

StirReverse::StirReverse() {
	Requires(Shoot);
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void StirReverse::Initialize() {
	Shoot->ShootStop();
}

// Called repeatedly when this Command is scheduled to run
void StirReverse::Execute() {
	Shoot->StirReverse();
}

// Make this return true when this Command no longer needs to run execute()
bool StirReverse::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StirReverse::End() {
	Shoot->ShootStop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StirReverse::Interrupted() {
	End();
}
