/*
 * DriveMotors.h
 *
 *  Created on: Feb 16, 2017
 *      Author: dange
 */

#ifndef SRC_SUBSYSTEMS_DRIVEMOTORS_H_
#define SRC_SUBSYSTEMS_DRIVEMOTORS_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"


class DriveMotors : public Subsystem{

private:
	Talon *leftFront;
	Talon *rightFront;
	Talon *leftBack;
	Talon *rightBack;
	RobotDrive *drive;
	MotorSafetyHelper *help;




	//Put private everything that does not impliment subsystem things

public:
	DriveMotors();
	void WaitT();
	void InitDefaultCommand();
	void DriveForward();
    void DriveBackward();
    void IDriveForward();
    void IDriveBackward();
	void TurnLeft();
	void TurnRight();
	void Stop();
	void ArcadeDrive(float x, float y);
	double GetAngle();
	void Calibrate();

	void AutoDriveF(float Value);

	void DriveFA();
	void DriveBA();



};
#endif /* SRC_SUBSYSTEMS_DRIVEMOTORS_H_ */
