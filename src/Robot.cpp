#include <memory>

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include "WPILib.h"
#include <Commands/DashboardAuto.h>
#include "Subsystems/DriveMotors.h"

#include "CommandBase.h"

class Robot: public frc::IterativeRobot {
private:
	ADXRS450_Gyro *gyro;
	Command *autonomousCommand;

	void RobotInit() override {
		CommandBase::init();
		autonomousCommand = new DashboardAuto();
		gyro = new ADXRS450_Gyro(SPI::kOnboardCS0);
		gyro->Calibrate();

	}

	void DisabledInit() override {

	}

	void DisabledPeriodic() override {
		frc::Scheduler::GetInstance()->Run();
	}

	void AutonomousInit() override {
		if(autonomousCommand != nullptr) {
			autonomousCommand->Start();
		}
	}

	void AutonomousPeriodic() override {
		frc::Scheduler::GetInstance()->Run();
	}

	void TeleopInit() override {
		if (autonomousCommand != nullptr) {
			autonomousCommand->Cancel();
		}
	}

	void TeleopPeriodic() override {
		frc::Scheduler::GetInstance()->Run();
	}

	void TestPeriodic() override {
		frc::LiveWindow::GetInstance()->Run();
	}

	frc::SendableChooser<frc::Command*> chooser;
};

START_ROBOT_CLASS(Robot)
