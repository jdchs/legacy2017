#include "CommandBase.h"

#include <Commands/Scheduler.h>
#include "Subsystems/DriveMotors.h"
#include "Subsystems/BallLoader.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/ClimbingComp.h"
#include "Subsystems/GyroClass.h"




// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.
OI* CommandBase::oi = new OI();
DriveMotors* CommandBase::DriveTrain;
BallLoader* CommandBase::Loader;
Shooter* CommandBase::Shoot;
ClimbingComp* CommandBase::ClimbComp;
GyroClass* CommandBase::GyroC;




//functions

CommandBase::CommandBase(char const *name) : Command(name) {

}

CommandBase::CommandBase() : Command() {

}

void CommandBase::init() {
	//create Instance
	oi = new OI();
	DriveTrain = new DriveMotors();
	Loader = new BallLoader();
	Shoot = new Shooter();
	ClimbComp = new ClimbingComp();
	GyroC = new GyroClass();


}
