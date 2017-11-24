#include "ClimbUp.h"

ClimbUp::ClimbUp() {
	Requires(ClimbComp);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void ClimbUp::Initialize() {
	ClimbComp->Stop();
}

// Called repeatedly when this Command is scheduled to run
void ClimbUp::Execute() {
	ClimbComp->Up();
}

// Make this return true when this Command no longer needs to run execute()
bool ClimbUp::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ClimbUp::End() {
	ClimbComp->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClimbUp::Interrupted() {
	End();
}
