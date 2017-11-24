#include "StirStop.h"

StirStop::StirStop() {
	Requires(Shoot);
}

// Called just before this Command runs the first time
void StirStop::Initialize() {
	Shoot->ShootStop();
}

// Called repeatedly when this Command is scheduled to run
void StirStop::Execute() {
	Shoot->ShootStop();
}

// Make this return true when this Command no longer needs to run execute()
bool StirStop::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StirStop::End() {
	Shoot->ShootStop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StirStop::Interrupted() {
	End();
}
