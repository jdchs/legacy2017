#include "AutoFire.h"

AutoFire::AutoFire() {
	Requires(Shoot);
}

void AutoFire::WaitT() {
	clock_t endwait;
	float seconds = .75;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while(clock() < endwait) {}
}

// Called just before this Command runs the first time
void AutoFire::Initialize() {
	Shoot->ShootStop();
}

// Called repeatedly when this Command is scheduled to run
void AutoFire::Execute() {
	Shoot->Execute();
	WaitT();
	Shoot->Stir();
}

// Make this return true when this Command no longer needs to run execute()
bool AutoFire::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutoFire::End() {
	Shoot->ShootStop();
	Shoot->StirStop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoFire::Interrupted() {
	End();
}
