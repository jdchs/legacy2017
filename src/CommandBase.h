#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <memory>
#include <string>

#include "Commands/Command.h"
#include "Subsystems/DriveMotors.h"
#include "WPILib.h"
#include "Subsystems/BallLoader.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/ClimbingComp.h"
#include "Subsystems/GyroClass.h"


#include "OI.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use
 * CommandBase::exampleSubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(char const *name);
	CommandBase();

	static void init();

	//create instances here *static*
	static OI *oi;
	static DriveMotors *DriveTrain;
	static BallLoader *Loader;
	static Shooter *Shoot;
	static ClimbingComp *ClimbComp;
	static GyroClass *GyroC;

};

#endif  // COMMAND_BASE_H
