#include "DashboardAuto.h"

DashboardAuto::DashboardAuto() {
/*
	double time1 = SmartDashboard::GetNumber("DB/Slider 0",0.0);

	double time2 = SmartDashboard::GetNumber("DB/Slider 1",0.0);
	double time3 = SmartDashboard::GetNumber("DB/Slider 2",0.0);
	double time4 = SmartDashboard::GetNumber("DB/Slider 3",0.0);
*/


	AddSequential(new TimedLinearDrive(.84, forward));
	AddSequential(new TimedLinearDrive(5, stop));
	AddSequential(new TimedLinearDrive(0.5, backward));
	AddSequential(new TimedLinearDrive(1, stop));
	//AddSequential(new GyroTurn(30));
	//AddSequential(new TimedLinearDrive(1, stop));
//	AddSequential(new TimedLinearDrive(.5, forward));
	//AddSequential(new GyroTurn(135));
//	AddSequential(new TimedLinearDrive(.5, FA));
//	AddSequential(new AutoFire());


	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}
