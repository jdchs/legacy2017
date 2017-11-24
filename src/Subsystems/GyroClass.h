#ifndef GyroClass_H
#define GyroClass_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class GyroClass : public Subsystem {
private:
	ADXRS450_Gyro *gyro;

public:
	GyroClass();
	void InitDefaultCommand();

	void Calibrate();
	double GetAngle();


};

#endif  // GyroClass_H
