#include "GyroClass.h"
#include "../RobotMap.h"
#include "WPILib.h"

GyroClass::GyroClass() : Subsystem("ExampleSubsystem") {
	gyro = new ADXRS450_Gyro(SPI::kOnboardCS0);
}

void GyroClass::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void GyroClass::Calibrate() {
	gyro->Calibrate();
}

double GyroClass::GetAngle() {
	return gyro->GetAngle();
}




