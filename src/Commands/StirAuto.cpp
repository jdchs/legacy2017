#include "StirAuto.h"

StirAuto::StirAuto() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Shoot);
}

// Called just before this Command runs the first time
void StirAuto::Initialize() {
	Shoot->StirStop();
}

// Called repeatedly when this Command is scheduled to run
void StirAuto::Execute() {
	Shoot->Stir();
}

// Make this return true when this Command no longer needs to run execute()
bool StirAuto::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StirAuto::End() {
	Shoot->StirStop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StirAuto::Interrupted() {
	End();
}
