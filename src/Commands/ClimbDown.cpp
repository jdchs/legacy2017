#include "ClimbDown.h"

ClimbDown::ClimbDown() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(ClimbComp);
}

// Called just before this Command runs the first time
void ClimbDown::Initialize() {
	ClimbComp->Stop();
}

// Called repeatedly when this Command is scheduled to run
void ClimbDown::Execute() {
	ClimbComp->Pulse();
}

// Make this return true when this Command no longer needs to run execute()
bool ClimbDown::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ClimbDown::End() {
	ClimbComp->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClimbDown::Interrupted() {
	End();
}
